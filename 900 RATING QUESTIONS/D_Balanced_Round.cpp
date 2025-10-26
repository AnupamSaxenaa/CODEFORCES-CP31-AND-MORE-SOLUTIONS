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
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin>>t;
        v.push_back(t);
    }

    if(n==1)
    {
        cout<<0<<"\n";
        return;
    }

    sort(v.begin(),v.end());
    int cnt = 1;
    vector<ll>keeper;
    for (int i = 0; i < n-1; i++)
    {
        if((v[i+1]-v[i])<=k)
            cnt++;
        else{
            keeper.push_back(cnt);
            cnt=1;
        }
    }
    keeper.push_back(cnt);
    if(keeper.size()==1)
        cout<<0<<"\n";

    else{
        ll mele = 0;
        ll sum = 0;
        for (int i = 0; i < keeper.size(); i++)
        {
            mele = max(mele,keeper[i]);
            sum+=keeper[i];
        }
        cout<<sum-mele<<"\n";
    }

}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}