#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define rep(i,a,b) for(int i=(a);i<(b);++i)

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vl = vector<ll>;

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v) cin >> x;

    ll ans = -1;
    for (int i = 0; i < n; i++)
    {
        if(v[i]!=i){
            if(ans==-1) ans = v[i];
            else ans &= v[i];
        }
    }
    cout<<ans<<endl;
}


int main(){
    fastio
    int t; cin>>t;
    while(t--) solve();
    return 0;
}