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
    vector<ll>v(1001,0);

    ll maxi = -1;
    for (int i = 1; i <= n; i++){
        ll temp ;
        cin>>temp;
        v[temp] = i;
    }

    for (int i = 1; i <=  1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if(v[i] && v[j] && gcd(i,j)==1){
                maxi = max(maxi,v[i]+v[j]);
            }
        }
        
    }
    cout<<maxi<<endl;
}

int main(){
    fastio
    int t; cin>>t;
    while(t--) solve();
    return 0;
}