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
    ll k;
    cin>>k;
    string s;
    ll i = 1;
    while (s.size()<=k)
    {
        s+=to_string(i);
        i++;
    }
    s.erase(k-1);
    
    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ll temp = s[i]-'0';
        sum+=temp;
    }
    cout<<sum<<"\n";
}   
int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}