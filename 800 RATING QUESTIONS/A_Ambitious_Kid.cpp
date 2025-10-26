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
    int n;
    cin>>n;
    int mini = INT_MAX;  

    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        if(t==0)
        {
            cout<<0<<"\n";
            return;
        }
        else if(t<0) t*=-1;

        if(t<mini) mini = t;
    }
    cout<<mini<<"\n";
    
}

int main() {
    fastio;

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}