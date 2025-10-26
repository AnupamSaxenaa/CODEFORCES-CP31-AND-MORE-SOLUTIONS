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
    ll n;
    cin>>n;

    vector<pair<ll,ll>>deals;
    ll x = 0;
    while (pow(3,x)<=n)
    {
        pair<ll,ll>tmp;
        ll quantity = pow(3,x);
        ll deal = pow(3,x+1)+x*pow(3,x-1);
        tmp = {quantity,deal};
        deals.push_back(tmp);
        x++;
    }
    
  
    ll money = 0;
    for (int i = deals.size()-1; i >= 0; i--)
    {
        ll multi = n/deals[i].first;
        money += deals[i].second*multi;
        n = n%deals[i].first;
    }
    cout<<money<<"\n";
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}