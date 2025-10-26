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
    int n,x;
    cin>>n>>x;
    vector<int>v;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }

    maxi = max(v[0],maxi);

    for (int i = 0; i < n-1; i++)
    {
        int difff = v[i+1]-v[i];
        maxi = max(maxi,difff);
    }
    
    int diff2 = 2*(x-v[v.size()-1]);
    maxi = max(diff2,maxi);
    cout<<maxi<<"\n";

}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}