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
    string s;
    cin >> s;

    int n = s.size();

    if (n == 1)
        cout << s << "\n";
    else
    {
        int ab = 0;
        int ba = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
                ab += 1;
            else if (s[i] == 'b' && s[i + 1] == 'a')
                ba += 1;
        }

        if (ab == ba)
            cout << s << "\n";
        else
        {
            if (s[0] == 'a')
            {
                s[0] = 'b';
                cout << s << "\n";
                return;
            }
            else
            {
                if (s[n - 1] == 'a')
                    s[n - 1] = 'b';
                cout << s << "\n";
                return;
            }
            cout << s << "\n";
        }
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