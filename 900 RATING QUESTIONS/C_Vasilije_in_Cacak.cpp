// #include <iostream>
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
    long long n,k,x;
    cin>>n>>k>>x;

    long long mini = (k*(k+1))/2;
    long long maxi = (n*(n+1))/2-((n-k)*(n-k+1)/2);
    if(x>=mini && x<=maxi)
        cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}