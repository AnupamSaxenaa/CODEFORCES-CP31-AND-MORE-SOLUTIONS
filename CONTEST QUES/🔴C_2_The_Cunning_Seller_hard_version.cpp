#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
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
    ll n,k;
    cin>>n>>k;

    if(n<=k)
    {
        cout<<3*n<<"\n";
        return;
    }

    ll x = 0;
    vector<pair<ll,ll>>deals;
    while (pow(3,x)<=n)
    {
        pair<ll,ll>tmp = {pow(3,x),pow(3,x+1)+x*pow(3,x-1)};
        deals.push_back(tmp);
        x++;
    }

    ll dealss = 0;
    ll cost = 0;
    for (int i = deals.size()-1; i >= 0; i--)
    {
        ll multi = n/deals[i].first;
        dealss += multi;
        cost = multi*deals[i].second;
        n = n%deals[i].first;
        if(dealss>k)
        {
            cout<<"-1"<<"\n";
            return;
        }
        else if(n==0)
        {
            cout<<cost<<"\n";
            return;
        }
    }
    cout<<cost<<"\n";
    
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}