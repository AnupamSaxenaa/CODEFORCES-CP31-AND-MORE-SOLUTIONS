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
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

//-------------------------------//
//        CONSTANTS              //
//-------------------------------//
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;

//-------------------------------//
//        DEBUG UTILS            //
//-------------------------------//
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define dbg(...) ((void)0)
#endif

//-------------------------------//
//       UTILITY FUNCTIONS       //
//-------------------------------//
ll gcdll(ll a, ll b) { return b ? gcdll(b, a % b) : a; }
ll lcmll(ll a, ll b) { return (a / gcdll(a, b)) * b; }
ll mod_add(ll a, ll b, ll m = MOD) { return (a + b) % m; }
ll mod_mul(ll a, ll b, ll m = MOD) { return (a * b) % m; }
ll mod_pow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

ll nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    r = min(r, n - r);
    ll res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - r + i) / i;
    }
    return res;
}

//-------------------------------//
//          CUSTOM HASH          //
//-------------------------------//
struct CustomHash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

//-------------------------------//
//           SOLVE               //
//-------------------------------//
void solve() {
    // Your logic here
    ll n,m,h; cin>>n>>m>>h; 
    vl a(n); for(auto &x : a) cin>>x;
    int l = 0 , r  = 0;
    vector<pair<ll,ll>>p;
    while(m)
    {
        ll b,c; cin>>b>>c;
        --b;

        p.pb({b,c});
        a[b]+=c;
        if(a[b]>h){
            while (l!=r)
            {
                a[p[l].first]-=p[l].second;
                l++;
            }
            //one extra clean for. l==r;
            a[p[l].first]-=p[l].second;
            r++;
            l++;
        }else{
            r++;
        }
        m--;
    }

    for(auto &x : a) cout<<x<<" ";
    cout<<endl;
}

//-------------------------------//
//             MAIN              //
//-------------------------------//
int main() {
    fastio;
    int t = 1;
    cin >> t; // uncomment if multiple test cases
    while (t--) solve();
    return 0;
}