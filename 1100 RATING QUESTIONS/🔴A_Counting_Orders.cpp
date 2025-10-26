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

const ll MOD = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    sort(all(a));
    sort(b.rbegin(), b.rend());

    ll result = 1;
    for (int i = 0; i < n; i++) {
        ll tar = b[i];
        ll idx = upper_bound(all(a), tar) - a.begin();
        ll nos = n - idx;
        ll choices = nos - i;
        if (choices <= 0) {
            cout << 0 << "\n";
            return;
        }
        result = (result * choices) % MOD;
    }

    cout << result << "\n";
}

int main(){
    fastio
    int t; cin>>t;
    while(t--) solve();
    return 0;
}