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

//-------------------------------//
//          CUSTOM HASH          //

//-------------------------------//
//           SOLVE               //
//-------------------------------//
void solve() {
    //input
    ll n; cin >> n; vl a(n); for(ll &x : a) cin >> x;
    //logic
    vector<ll>pref(n+1,0);
    vector<ll>suff(n+1,0);
    pref[1] = a[0];
    for (int i = 2; i <= n; i++)
        pref[i] = pref[i-1]+abs(a[i-1]);
    for(int i = n-1 ; i >=0 ; i--)
        suff[i] = suff[i+1]-a[i];

    //now one by one i am not going to select a particular element till the end and i will update the maxx accordingly
    ll maxx = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        ll ans  = suff[i+1]+pref[i];
        maxx = max(maxx,ans);
    }
    
    cout<<maxx<<endl;
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