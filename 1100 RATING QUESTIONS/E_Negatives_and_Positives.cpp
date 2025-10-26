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

void solve(){
    // write your solution here
    bool hasZero = false;
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum = 0;
    ll negatives = 0;
    ll mini = LLONG_MAX;
    for(auto &x : v){
        cin>>x;
        if(x==0) hasZero = true;
        sum+=abs(x);
        if(x<0) negatives++;
        mini = min(abs(x),mini);
    }

    if(hasZero || negatives%2==0){
        cout<<sum<<endl;
        return;
    }

    cout<<sum-2*mini<<endl;

}

int main(){
    fastio
    int t; cin>>t;
    while(t--) solve();
    return 0;
}