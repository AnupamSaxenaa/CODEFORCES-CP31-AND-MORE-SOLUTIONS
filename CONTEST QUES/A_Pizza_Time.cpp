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
    ll n;
    cin>>n;

    //basecase condition mittar
    if(n<=2)
    {
        cout<<0<<endl;
        return;
    }

    ll hao = 0;
    while (n>=3)
    {
        ll rem = n%3;
        ll div = n/3;

        hao+=div;
        n = div+rem;
    }
    
    cout<<hao<<endl;
    return;

}

int main(){
    fastio
    int t; cin>>t;
    while(t--) solve();
    return 0;
}