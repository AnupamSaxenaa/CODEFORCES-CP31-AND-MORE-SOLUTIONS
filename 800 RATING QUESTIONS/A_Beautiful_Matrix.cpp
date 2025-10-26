#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve() {
    // ✅ Write your logic here
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int t;
            cin>>t;
            if(t==1)
            {
                int rowSwitches = 2-i;
                if(rowSwitches<0) rowSwitches*=-1;
                int columnSwitches = 2-j;
                if(columnSwitches<0) columnSwitches*=-1;
                cout<<rowSwitches+columnSwitches<<"\n";
                return;
            }
        }
        
    }
    
}

int main() {
    fastio;

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}