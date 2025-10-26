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
    vector<ll>v;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin>>t;
        v.push_back(t);
    }

    int steps = 0;
    int snaps = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]!=0)
            steps++;
        else{
            if(steps>0) snaps++;
            steps = 0;
        }
        
    }
    if(steps>0) snaps++;
    if(snaps>2) 
    {
        cout<<2<<"\n";
        return;
    }
    cout<<snaps<<"\n";
    
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}