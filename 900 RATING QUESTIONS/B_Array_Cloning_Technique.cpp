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
    int n;
    cin >> n;
    vector<ll> v;
    unordered_map<ll, ll> mpp;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        v.push_back(t);
        mpp[t]++;
    }
    if (n == 1)
    {
        cout << 0 << "\n";
        return;
    }

    ll maxi = 1;
    for (auto x : mpp)
        maxi = max(maxi, x.second);

    ll others = n - maxi;

    if (maxi == n)
    {
        cout << 0 << "\n";
        return;
    }

    if (maxi >= others)
    {
        cout << 1+others << "\n";
        return;
    }

    int cnt = 0;
    ll ele_cov = maxi;
    ll temp = maxi;
    cnt++;
    while (ele_cov<others)
    {
        temp*=2;
        ele_cov = ele_cov+temp;
        cnt++;
    }
    cout<<cnt+others<<endl;

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