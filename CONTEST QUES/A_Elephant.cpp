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
    int x;
    cin >> x;
    vector<int> v = {5, 4, 3, 2, 1};

    int steps = 0;

    for (int i = 0; i < 5; i++) {
        steps += x / v[i];
        x %= v[i];
    }

    cout << steps << endl;
}


int main(){
    fastio
    int t; //cin>>t;
    t = 1;
    while(t--) solve();
    return 0;
}