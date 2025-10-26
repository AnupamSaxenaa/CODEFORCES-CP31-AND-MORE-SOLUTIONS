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

void solve()
{
    // write your solution here
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        ll cost_per_index = (i + 1) + a[i];
        a[i] = cost_per_index;
    }

    ll cnt = 0;
    sort(all(a));
    for (auto &x : a)
    {
        c -= x;
        if (c >= 0)
            cnt++;
        else
            break;
    }

    cout << cnt << endl;
}

int main()
{
    fastio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}