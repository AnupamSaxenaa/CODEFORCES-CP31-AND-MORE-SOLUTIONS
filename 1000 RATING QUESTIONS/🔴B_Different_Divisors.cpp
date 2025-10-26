#include <bits/stdc++.h>
using namespace std;

// ---------- FAST IO ----------
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

// ---------- MACROS ----------
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define rep(i,a,b) for (int i = (a); i < (b); ++i)
#define rrep(i,a,b) for (int i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()

// ---------- TYPEDEFS ----------
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vl = vector<ll>;
const ll INF = 1e18;
const int MOD = 1e9+7;

// ---------- UTILS ----------
ll gcd(ll a, ll b) { while (b) { ll t = a % b; a = b; b = t; } return a; }
ll lcm(ll a, ll b) { return a / gcd(a,b) * b; }

ll mod_add(ll a, ll b, ll m = MOD) { a %= m; b %= m; return (a+b+m)%m; }
ll mod_sub(ll a, ll b, ll m = MOD) { a %= m; b %= m; return (a-b+m)%m; }
ll mod_mul(ll a, ll b, ll m = MOD) { return ( (__int128)a * b ) % m; }

ll mod_pow(ll a, ll b, ll m = MOD) {
    ll res = 1; a %= m;
    while (b > 0) {
        if (b & 1) res = mod_mul(res,a,m);
        a = mod_mul(a,a,m);
        b >>= 1;
    }
    return res;
}

ll mod_inv(ll a, ll m = MOD) { return mod_pow(a, m-2, m); }

// ---------- COMBINATORICS ----------
const int N = 2e5+5;
ll fact[N], invfact[N];

void precompute_factorials(int n = N-1) {
    fact[0] = 1;
    for (int i = 1; i <= n; i++) fact[i] = mod_mul(fact[i-1], i);
    invfact[n] = mod_inv(fact[n]);
    for (int i = n; i >= 1; i--) invfact[i-1] = mod_mul(invfact[i], i);
}

ll nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return mod_mul(fact[n], mod_mul(invfact[r], invfact[n-r]));
}

// ---------- PRIME SIEVE ----------
// vector<int> primes;
// vector<bool> is_prime;

// void sieve(int n = 1e6) {
//     is_prime.assign(n+1, true);
//     is_prime[0] = is_prime[1] = false;
//     for (int i = 2; i*i <= n; i++) {
//         if (is_prime[i]) {
//             for (int j = i*i; j <= n; j += i) is_prime[j] = false;
//         }
//     }
//     for (int i = 2; i <= n; i++) if (is_prime[i]) primes.pb(i);
// }

// ---------- DSU (Disjoint Set Union) ----------
struct DSU {
    vector<int> p, sz;
    DSU(int n) { p.resize(n); sz.assign(n,1); iota(all(p),0); }
    int find(int x) { return p[x]==x ? x : p[x]=find(p[x]); }
    bool unite(int a, int b) {
        a = find(a), b = find(b);
        if (a==b) return false;
        if (sz[a] < sz[b]) swap(a,b);
        p[b] = a; sz[a] += sz[b];
        return true;
    }
};

// ---------- SOLVE ----------
bool is_prime(ll x) {
    if (x < 2) return false;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

ll next_prime(ll y) {
    while (!is_prime(y)) {
        y++;
    }
    return y;
}

//ANY NUMBER CAN BE WRITTEN IN FORM OF SOME POWER RAISED TO PRIME NUMBER N = P^alpha * Q^beta..... 
//total divisors = (alpha+1)(beta+1).... 
//if a has atmost 4 divisors and b has atmost 10 divisors then a<b; 
//so we look for a number with exactly 4 divisors 
//so N = p^(alpha)*q^(beta)*r^(gama)*s^(delta) 
//so (alpha+1)(beta+1)(gama+1)(delta+1) = 4 
//it has 2 solutions case 1 -> 4 = 1*1*1*4 or case 2 -> 4 = 1*1*2*2

void solve() {
    int d;
    cin >> d;
    ll num = LLONG_MAX;

    // Case 1: N = p^3
    //case 1 -> delta = 3 so number will be of form N = p^3 and its divisors -> 1,p,p^2,p^3 
    // p-1 = d1 , p^2-p = d2 , p^3-p^2=d3 & d1,d2,d3 must be >= d so atleast p should be >= (d+1) baki sare pair ke diff automatically >=d hojaega
    ll p = next_prime(d + 1);
    num = min(num, p * p * p);

    // Case 2: N = p * q
    //case 2 -> delta = 1 and gama = 1 so N = pq , p and q are primes 
    //divisors = 1,p,q,pq 
    //d1 = p-1,d2 = q-p,d3 = pq-q soooo p>=d+1 also q>=p+d
    ll q = next_prime(p + d);
    num = min(num, p * q);

    cout << num << endl;
}  

int main() {
    fastio;
    precompute_factorials();
    // sieve();
    
    int t = 1;
    cin >> t; // Uncomment for multiple test cases
    while (t--) solve();
    return 0;
}