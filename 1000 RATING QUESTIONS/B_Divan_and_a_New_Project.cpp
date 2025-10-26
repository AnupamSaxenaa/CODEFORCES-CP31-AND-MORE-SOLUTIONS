#include <bits/stdc++.h>
using namespace std;

// ---------- FAST IO ----------
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr)

// ---------- MACROS ----------
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()

// ---------- TYPEDEFS ----------
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
const ll INF = 1e18;
const int MOD = 1e9 + 7;

// ---------- UTILS ----------
ll gcd(ll a, ll b)
{
    while (b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll mod_add(ll a, ll b, ll m = MOD)
{
    a %= m;
    b %= m;
    return (a + b + m) % m;
}
ll mod_sub(ll a, ll b, ll m = MOD)
{
    a %= m;
    b %= m;
    return (a - b + m) % m;
}
ll mod_mul(ll a, ll b, ll m = MOD) { return ((__int128)a * b) % m; }

ll mod_pow(ll a, ll b, ll m = MOD)
{
    ll res = 1;
    a %= m;
    while (b > 0)
    {
        if (b & 1)
            res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}

ll mod_inv(ll a, ll m = MOD) { return mod_pow(a, m - 2, m); }

// ---------- COMBINATORICS ----------
const int N = 2e5 + 5;
ll fact[N], invfact[N];

void precompute_factorials(int n = N - 1)
{
    fact[0] = 1;
    for (int i = 1; i <= n; i++)
        fact[i] = mod_mul(fact[i - 1], i);
    invfact[n] = mod_inv(fact[n]);
    for (int i = n; i >= 1; i--)
        invfact[i - 1] = mod_mul(invfact[i], i);
}

ll nCr(int n, int r)
{
    if (r < 0 || r > n)
        return 0;
    return mod_mul(fact[n], mod_mul(invfact[r], invfact[n - r]));
}

// ---------- PRIME SIEVE ----------
vector<int> primes;
vector<bool> is_prime;

void sieve(int n = 1e6)
{
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
        if (is_prime[i])
            primes.pb(i);
}

// ---------- DSU (Disjoint Set Union) ----------
struct DSU
{
    vector<int> p, sz;
    DSU(int n)
    {
        p.resize(n);
        sz.assign(n, 1);
        iota(all(p), 0);
    }
    int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
    bool unite(int a, int b)
    {
        a = find(a), b = find(b);
        if (a == b)
            return false;
        if (sz[a] < sz[b])
            swap(a, b);
        p[b] = a;
        sz[a] += sz[b];
        return true;
    }
};

// ---------- SOLVE ----------
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

sort(all(a), [&](pair<ll,ll> a, pair<ll,ll> b){
    return a.first > b.first;
});


    vector<ll> ans(n + 1);
    ans[0] = 0;
    ll stepl = -1;
    ll stepr = 1;
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        ll idx = a[i].second;
        if (i % 2 == 0)
        {
            ans[idx] = stepr;
            stepr++;
        }
        else
        {
            ans[idx] = stepl;
            stepl--;
        }
        total += 2 * abs(ans[idx]) * a[i].first;
    }

    cout << total << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    fastio;
    precompute_factorials();
    sieve();

    int t = 1;
    cin >> t; // Uncomment for multiple test cases
    while (t--)
        solve();
    return 0;
}