#include <iostream>
#include <cmath>
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
    ll n;
    cin >> n;
    vector<ll> ans;
    ll pow10 = 10;
    while (pow10 <= n)
    {
        ll deno = (1 + pow10);
        if (n % deno == 0)
        {
            ans.push_back(n / deno);
        }
        pow10 *= 10;
    }

    if(ans.size()==0)
    {
        cout<<0<<"\n";
        return;
    }

    cout << ans.size() << "\n";
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
        if (i > 0)
            cout << " ";
    }
    cout << "\n";
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