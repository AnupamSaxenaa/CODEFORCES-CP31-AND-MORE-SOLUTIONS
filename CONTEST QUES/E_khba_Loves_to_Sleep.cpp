#include <bits/stdc++.h>
using namespace std;

//-------------------------------//
//          MACROS               //
//-------------------------------//
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl '\n'

//-------------------------------//
//          TYPEDEFS             //
//-------------------------------//
using ll = long long;
using pll = pair<ll, ll>;
using vl = vector<ll>;
using vpll = vector<pll>;

//-------------------------------//
//        CONSTANTS              //
//-------------------------------//
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const long double EPS = 1e-9;

//-------------------------------//
//       UTILITY FUNCTIONS       //
//-------------------------------//
vpll merge_intervals(vpll &v) {
    sort(all(v));
    vpll res;
    ll l = v[0].ff, r = v[0].ss;
    for (auto &p : v) {
        if (p.ff <= r + 1) r = max(r, p.ss);
        else res.pb({l, r}), l = p.ff, r = p.ss;
    }
    res.pb({l, r});
    return res;
}

bool ok(vl &a, ll k, ll x, ll D) {
    if (!D) return (x + 1) >= k;
    vpll seg;
    for (ll i : a) {
        ll l = max(0LL, i - D + 1), r = min(x, i + D - 1);
        if (l <= r) seg.pb({l, r});
    }
    auto m = merge_intervals(seg);
    ll cover = 0;
    for (auto &p : m) cover += (p.ss - p.ff + 1);
    return (x + 1 - cover) >= k;
}

vl build(vl &a, ll k, ll x, ll D) {
    vl ans;
    if (!D) { for (ll i = 0; i < k; i++) ans.pb(i); return ans; }
    vpll seg;
    for (ll i : a) {
        ll l = max(0LL, i - D + 1), r = min(x, i + D - 1);
        if (l <= r) seg.pb({l, r});
    }
    auto m = merge_intervals(seg);
    ll p = 0;
    for (auto &iv : m) {
        while (p < iv.ff && sz(ans) < k) ans.pb(p++);
        p = max(p, iv.ss + 1);
    }
    while (sz(ans) < k && p <= x) ans.pb(p++);
    return ans;
}

//-------------------------------//
//           SOLVE               //
//-------------------------------//
void solve() {
    int n; ll k, x; cin >> n >> k >> x;
    vl a(n); for (auto &i : a) cin >> i;
    sort(all(a));

    ll l = 0, h = x + 1;
    while (l < h) {
        ll mid = (l + h + 1) / 2;
        if (ok(a, k, x, mid)) l = mid;
        else h = mid - 1;
    }

    auto ans = build(a, k, x, l);
    for (int i = 0; i < sz(ans); i++) cout << ans[i] << " \n"[i == sz(ans) - 1];
}

//-------------------------------//
//             MAIN              //
//-------------------------------//
int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
