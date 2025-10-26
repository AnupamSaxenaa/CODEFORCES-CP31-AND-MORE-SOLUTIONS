#include <iostream>
#include <bits/stdc++.h>
#include <map>
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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int odd_cnt = 0;
    map<char,int>mpp;
    for (int i = 0; i < n; i++)
            mpp[s[i]]++;

    for(auto it : mpp)
    {
        if(it.second%2!=0)
        odd_cnt++;
    }
    
    if(odd_cnt<=(k+1))
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}