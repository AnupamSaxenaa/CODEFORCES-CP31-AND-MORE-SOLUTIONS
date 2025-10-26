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

    if ((n+1)%3==0 || (n-1)%3==0)
    {
        cout<<"First"<<"\n";
        return;
    }
    cout<<"Second"<<"\n"; 
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}