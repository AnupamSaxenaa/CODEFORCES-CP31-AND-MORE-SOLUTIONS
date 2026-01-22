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
    ll n; cin>>n;
    if(n==1){
        no;
        return;
    }
    vector<ll>lcm;
    ll t = n, i = 2;


    //lcm calc
    for(int i = 2 ; i*i <= t ;i++){
        while (t%i==0)
        {
            lcm.pb(i);
            t/=i;
        }
    }
    if(t>1) lcm.pb(t); 


    vector<ll>ans;
    bool valid = false;
    ll temp = 1;
    unordered_map<ll,ll,CustomHash>mpp;
    mpp[1]++;
    for (int i = 0; i < lcm.size(); i++)
    {
        if(i==0){
            ans.pb(lcm[i]);
            mpp[lcm[i]]++;
            continue;
        }
        temp*=lcm[i];
        if(mpp.find(temp)==mpp.end()){
            ans.pb(temp);
            mpp[temp]++;
            temp = 1;
        }
        if(ans.size()==2){
            i++;
            while (i<lcm.size())
                temp*=lcm[i++];

            if(mpp.find(temp)==mpp.end()){
                ans.pb(temp);
                valid = true;
                break;
            }else{
                valid = false;
                break;
            }
        }

    }
    if(valid){
        cout<<"YES"<<endl;
        for(auto &x : ans){
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }else no;

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

