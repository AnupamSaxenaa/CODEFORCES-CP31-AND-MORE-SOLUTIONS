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
    vector<int>v;
    int xorop = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
        xorop = xorop^t;
    }
    if(xorop==0)
    {
        cout<<1<<"\n";
        cout<<1<<" "<<v.size()<<"\n";
        return;
    }

    if(n%2==0)
    {
        cout<<2<<"\n";
        cout<<1<<" "<<n<<"\n";
        cout<<1<<" "<<n<<"\n";
        return;
    }
    else{
        cout<<4<<"\n";
        cout<<1<<" "<<n-1<<"\n";
        cout<<1<<" "<<n-1<<"\n";
        cout<<n-1<<" "<<n<<"\n";
        cout<<n-1<<" "<<n<<"\n";
    }

    
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}