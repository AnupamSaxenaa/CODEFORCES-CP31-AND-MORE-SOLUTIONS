#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve()
{
    string s, t;
    cin >> s >> t;

    unordered_map<char, int> mpp;
    for (auto x : t)
        mpp[x]++;

    int i = s.size() - 1;
    int j = t.size() - 1;

    while (j >= 0 && i >= 0)
    {
        if (s[i] == t[j])
        {
            if (mpp[t[j]] <= 0)
            {
                cout << "NO" << "\n";
                return;
            }
            mpp[t[j]]--;
            j--;
        }

        else if (mpp.find(s[i]) != mpp.end())
            mpp[s[i]]--;

        i--;
    }
    if (j < 0)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
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