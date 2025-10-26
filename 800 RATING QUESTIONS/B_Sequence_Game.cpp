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

    vector<int>ans;

        ans.push_back(v[0]);
        for (int i = 0; i < n - 1; i++) {
            if(v[i]<=v[i+1]) ans.push_back(v[i+1]);
            else{
                ans.push_back(v[i+1]);
                ans.push_back(v[i+1]);
            }
        }

    
    
    
    cout <<ans.size()<< "\n";
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
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