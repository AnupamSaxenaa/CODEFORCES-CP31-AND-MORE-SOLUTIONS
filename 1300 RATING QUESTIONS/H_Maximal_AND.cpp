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
    ll n,k; cin>>n>>k;
    vl a(n); for(auto &x : a) cin>>x;

    //mnaking a hashmap to mark bits 
    vector<int>hash(32,0);
    //going to every num and marking it in hash (accumulating bits)
    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        for (int j = 0; j < 32; j++)
            if((num & (1<<j)) != 0) hash[j]++;
    }
    //finding cost for every bit to set in the final answer
    vi cost;
    for (int i = 0; i < hash.size(); i++)
    {
        int c = n - hash[i];
        cost.pb(c);
    }
    //fixing the best bits
    for (int i = 30 ; i>=0; i--)
    {
        int spend = cost[i];
        if(k==0) break;
        else if(spend>k) continue;
        else {
            k-=spend;
            hash[i] = n;
        }
    }
    //building the num;
    ll num = 0;
    for (int i = 0; i < hash.size(); i++)
    {
        if(hash[i]==n)
        num+=(1<<i);
    }
    cout<<num<<endl;
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