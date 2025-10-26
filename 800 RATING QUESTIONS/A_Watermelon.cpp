#include <bits/stdc++.h>
#include<iostream>
using namespace std;
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
    int w;
    cin >> w;
    if(w%2==0 && w>2) cout<<"YES\n";
    else cout<<"NO\n";
    
}

int main() {
    fastio;

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}