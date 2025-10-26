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
    vector<ll> a;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        a.push_back(t);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            a[i] = 2;
        if (i > 0 && a[i] % a[i - 1] == 0)
            a[i] += 1;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
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