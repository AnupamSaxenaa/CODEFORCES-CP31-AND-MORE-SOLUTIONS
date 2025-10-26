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
    int n, a, b;
    cin >> n >> a >> b;
  
if(n==a && a==b)
{
            cout << "Yes" << "\n";
        return;
}

    if ((a + b) < (n-1))
    {
        cout << "Yes" << "\n";
        return;
    }
    cout << "No" << "\n";

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