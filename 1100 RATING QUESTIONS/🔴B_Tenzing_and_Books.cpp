#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

#define ll long long
void solve() {
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    ll knowledge = 0;

    auto readStack = [&](vector<ll> &v) {
        for (ll val : v) {
            if ((val | x) == x)
                knowledge |= val;
            else
                break;
        }
    };

    readStack(a);
    readStack(b);
    readStack(c);

    cout << (knowledge == x ? "Yes" : "No") << "\n";
}


int main()
{
    fastio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}