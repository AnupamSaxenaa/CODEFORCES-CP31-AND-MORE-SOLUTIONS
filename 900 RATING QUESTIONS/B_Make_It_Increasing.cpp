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
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        v.push_back(t);
    }

    if (n == 1)
    {
        cout << 0 << "\n";
        return;
    }

    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] >= v[i + 1])
        {
            while (v[i] >= v[i + 1])
            {
                v[i] = v[i] / 2;
                cnt++;
                if (v[i] == v[i + 1] && v[i] == 0)
                {
                    cout << -1 << "\n";
                    return;
                }
            }

            int j = i;
            while (j > 0)
            {
                if (v[j - 1] >= v[j])
                {
                    while (v[j - 1] >= v[j])
                    {
                        v[j - 1] = v[j - 1] / 2;
                        cnt++;
                        if (v[j - 1] == v[j] && v[j] == 0)
                        {
                            cout << -1 << "\n";
                            return;
                        }
                    }
                }

                j--;
            }
        }
    }
    cout << cnt << "\n";
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