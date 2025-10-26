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
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }

    int maxi = 0;

    //1ST ELE WITH OTHERS
    for (int i = 1; i <= n - 1; i++)
    {
        int t_diff = a[i] - a[0];
        maxi = max(maxi, t_diff);
    }
    //2ND ELE WITH OTHERS
    for (int i = n - 2; i >= 0; i--)
    {
        int t_diff = a[n - 1] - a[i];
        maxi = max(maxi, t_diff);
    }
    //NEIGHBOUR CHECKING
    for (int i = 0; i < n - 1; i++) {
    int t_diff = a[i] - a[i + 1];
    maxi = max(maxi, t_diff);
}

    cout << maxi << "\n";
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