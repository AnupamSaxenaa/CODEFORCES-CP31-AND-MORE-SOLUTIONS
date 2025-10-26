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
    ll n;
    cin >> n;

    if (n < 4)
    {
        cout << -1 << "\n";
        return;
    }

    if (n % 4 != 0 && n % 6 != 0)
    {
        if (n % 2 != 0)
        {
            cout << -1 << "\n";
            return;
        }
    }

    if (n % 6 == 0 && n % 4 == 0)
    {
        cout << n / 6 << " " << n / 4 << "\n";
        return;
    }
    else
    {
        // if (n % 6 == 0 && n % 4 != 0)
        // {
        //     ll mini = n / 6;
        //     ll maxi = 0;
        //     if (n <= 6)
        //         maxi = mini;
        //     else
        //         maxi = n / 4;

        //     cout << mini << " " << maxi << "\n";
        //     return;
        // }
        // else
        // {
        //     ll maxi = n / 4;
        //     ll mini = 0;
        //     if (n < 6)
        //         mini = maxi;
        //     else
        //         mini = n/6 + 1;

        //     cout << mini << " " << maxi << "\n";
        //     return;
        // }

        ll mini = n / 4;
        ll maxi = n/6+1;
        cout << mini << " " << maxi << "\n";
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