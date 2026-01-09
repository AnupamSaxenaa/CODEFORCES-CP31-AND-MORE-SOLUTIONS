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
    ll n,m; cin>>n>>m; vl a(n),b(m); for(auto &x : a) cin>>x; for(auto &x : b) cin>>x;

    //phele gifts ko sort krdo wrt val and bind with their index
    vector<pair<ll,ll>>gifts;
    for (int i = 0; i < m; i++)
        gifts.pb({b[i],i+1});
    sort(all(gifts));
    // dbg(gifts);
    //fir numbers assigned ko bhi sort krlo
    vector<pair<ll,ll>>ass;
    for (int i = 0; i < n; i++)
        ass.pb({b[a[i]-1],a[i]});
    sort(all(ass));
    dbg(ass);
    ll cost = 0;
    int i = 0 , j = ass.size()-1;
    while(j>=0){

        ll ki = ass[j].second,dm = ass[j].first,gp = gifts[i].first;//dm = direct money
        if(i<m){
            if(dm<=gp) {
                cost+=dm;
            }else{
                cost+=gp;
                i++;
            }
        }else
            cost+=dm;
        j--;
    }
    cout<<cost<<endl;
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