#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve()
{
    // ✅ Write your logic here
    ll x, n;
    cin >> x >> n;
    
    ll p = x%2;
    ll q = n%4;

    if(p==0)
    {
        if(q==0) cout<<x<<"\n";
        else if(q==1) cout<<x-n<<"\n";
        else if(q==2) cout<<x+1<<"\n";
        else cout<<x+n+1<<"\n";
    }
    else{
        if(q==0) cout<<x<<"\n";
        else if(q==1) cout<<x+n<<"\n";
        else if(q==2) cout<<x-1<<"\n";
        else cout<<x-n-1<<"\n";
    }
}

int main()
{
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--)
        solve();

    return 0;
}