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

ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void solve()
{
    // ✅ Write your logic here
    ll a, b;
    cin >> a >> b;

    if (a == b)
        cout << 0 << " " << 0 << "\n";
    else
    {
        ll diff = max(a, b) - min(a, b);
        cout << diff << " " << min(a%diff, diff-a%diff) << endl;
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