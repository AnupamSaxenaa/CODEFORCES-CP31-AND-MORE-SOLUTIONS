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
    const ll MOD = 1e9 + 7;
    ll n;
    cin >> n;

    __int128 ans = 2 * (__int128)n * (n + 1) * (2 * n + 1) / 6 - n*(n+1)/2;
    ans = (ans * 2022) % MOD;

    cout << (long long)ans << '\n';
}


int main(){
    fastio
    int t; cin>>t;
    while(t--) solve();
    return 0;
}

