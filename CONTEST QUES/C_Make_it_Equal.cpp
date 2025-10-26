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
    int n, k;
    cin >> n >> k;
    vector<int> s, t;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        s.push_back(t);
    }

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        t.push_back(temp);
    }

    vector<int> hash;
    for (int i = 0; i < n; i++)
    {
        bool ispresent = false;
        for (int j = 0; j < n; j++)
        {
            if (s[i] == t[j])
            {
                auto it = find(hash.begin(), hash.end(), s[i]);
                if (it != hash.end())
                    hash.push_back(s[i]);
                ispresent = true;
                break;
            }
        }
        if (ispresent != true)
        {
            int sub = s[i] - k;
            int add = s[i] + k;
            if (sub < 0)
                sub *= -1;
            for (int l = 0; l < n; l++)
            {
                if (t[l] == sub)
                {
                }
            }
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