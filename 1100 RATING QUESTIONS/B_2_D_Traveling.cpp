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
    // input baby n=no of cities , k= no of major cities,a = starting , b = ending
    ll n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        pair<ll, ll> cor;
        cin >> cor.first >> cor.second;
        v.push_back(cor);
    }

    ll ax = v[a - 1].first, ay = v[a - 1].second;
    ll bx = v[b - 1].first, by = v[b - 1].second;
    ll cost = LLONG_MAX;

    // direct a->b
    ll tempcost = abs(ax - bx) + abs(ay - by);
    cost = min(cost, tempcost);

    // middleware
    if (k <= 1)
    {
        cout << cost << endl;
        return;
    }

    ll axx, ayy, bxx, byy;
    ll minDistA = LLONG_MAX;
    ll minDistB = LLONG_MAX;
    for (int i = 0; i < k; i++)
    {
        ll minA = abs(v[i].first - ax) + abs(v[i].second - ay);
        if (minDistA > minA)
            minDistA = minA;
        
        ll minB = abs(v[i].first - bx) + abs(v[i].second - by);
        if (minDistB > minB)
            minDistB = minB;
        
    }

    cost = min(cost,minDistA+minDistB);
    cout<<cost<<endl;
    return;
}

int main()
{
    fastio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}