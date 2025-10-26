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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }

    int operations = 0;
    int negT = 0;
    int posT = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
            negT++;
        else
            posT++;
    }

    if (negT == 0)
    {
        cout << 0 << "\n";
        return;
    }
    if (negT > posT)
    {
        while (negT>posT)
        {
            negT--;
            posT++;
            operations++;
        }
        
    }

    if (negT % 2 == 0)
    {
        cout << operations << "\n";
        return;
    }
    else
    {
        operations++;
        negT--;
        posT++;
    }
    cout << operations << "\n";
    return;
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