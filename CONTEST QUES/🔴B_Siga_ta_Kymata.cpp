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
#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << x << endl
#else
#define dbg(x)
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
    ll n;
    cin>>n;
    vl a(n);
    for(auto &x : a) cin>>x;
    string x;
    cin>>x;

    //edge cases bitch


    //4 condition jisko follow hona hi hoga to exist else never gonna exist bitch
    //first and last bit needs to be 0
    if(x[0]=='1' || x[n-1]=='1'){
        cout<<-1<<endl;
        return;
    }
    //min and max ele's bit should also be 0
    ll mini = LLONG_MAX , maxi = LLONG_MIN ;
    auto min_it = min_element(all(a));
    auto max_it = max_element(all(a));
    ll aa = distance(a.begin(),min_it);
    ll b = distance(a.begin(),max_it);

    if(x[aa]=='1' || x[b]=='1'){
        cout<<-1<<endl;
        return;
    }

    vector<pair<ll,ll>>v = {{1,aa+1},{1,b+1},{min(aa+1,b+1),max(aa+1,b+1)},{aa+1,n},{b+1,n}};
    cout<<5<<endl;
    for(auto &[dx,dy] : v){
        cout<<dx<<" "<<dy<<endl;
    }

    return;
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