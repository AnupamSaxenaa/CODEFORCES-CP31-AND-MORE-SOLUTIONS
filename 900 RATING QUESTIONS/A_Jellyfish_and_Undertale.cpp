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
    long long a,b;
    cin>>a>>b>>n;
    vector<long long>v;
    for (int i = 0; i < n; i++)
    {
        long long t;
        cin>>t;
        v.push_back(t);
    }

    long long sec = 0;
    sec+=b;
    for (int i = 0; i < n; i++)
    {
        if(v[i]<a) sec+=v[i];
        else sec+=(a-1);
    }
    cout<<sec<<"\n";
    
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}