#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define rrep(i,a,b) for(int i=(a); i>=(b); --i)
#define sz(x) (int)(x).size()

using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<ll> ev, od, a(n);
    rep(i,0,n) {
        cin >> a[i];
        if (a[i] % 2 == 0) ev.pb(a[i]);
        else od.pb(a[i]);
    }
    if (od.empty()) {
        cout << 0 << "\n";
        return;
    }
    ll ans = accumulate(all(ev), 0LL);
    sort(all(od), greater<ll>());
    ll k = (sz(od) + 1) / 2;
    rep(i,0,k) ans += od[i];
    cout << ans << "\n";
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
