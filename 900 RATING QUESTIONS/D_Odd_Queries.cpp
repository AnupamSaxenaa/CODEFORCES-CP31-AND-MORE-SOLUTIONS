#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve()
{
    // ✅ Write your logic here
    int n, q;
    cin >> n >> q;
    vector<ll> a;
    vector<ll> sum_c;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        a.push_back(t);

        sum += t;
        sum_c.push_back(sum);
    }


    for (int i = 0; i < q; i++)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        ll range_sum = 0;
        if((l-2)<0)
            range_sum = sum_c[r-1];
        else 
            range_sum = (sum_c[r - 1] - sum_c[l - 2]);
        
        ll sumt = sum_c[sum_c.size() - 1] - range_sum + k * (r - l + 1);
        if (sumt % 2 != 0)
            cout << "YES" << "\n";

        else
            cout << "NO" << "\n";
    }
}

int main()
{
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--)
        solve();

    return 0;
}