#include <bits/stdc++.h>
using namespace std;

//-------------------------------//
//          MACROS               //
//-------------------------------//
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
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
ll mod_pow(ll a, ll b, ll m = MOD)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

//-------------------------------//
//          CUSTOM HASH          //
//-------------------------------//
struct CustomHash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
//-------------------------------//
//           SOLVE               //
//-------------------------------//
void solve()
{
    // Your logic here
    ll n;
    cin >> n;
    vl a(n), b(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    // TRACKING MKC TO AVOID O(N)
    vector<ll> maxup(n);
    vector<ll> minup(n);
    vector<ll> mindown(n);
    vector<ll> maxdown(n);

    ll mini = LLONG_MAX, maxi = LLONG_MIN, minii = LLONG_MAX, maxii = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        // upper
        if (mini > a[i])
            mini = a[i];
        if (maxi < a[i])
            maxi = a[i];
        minup[i] = mini;
        maxup[i] = maxi;

        // lower
        if (minii > b[n-1-i])
            minii = b[n-1-i];
        if (maxii< b[n-1-i])
            maxii = b[n-1-i];
        mindown[n-1-i] = minii;
        maxdown[n-1-i] = maxii;
    }

    //debug
    // for(auto &x : mindown)
    // {
    //     cout<<x<<" ";
    // }

    //combine both the rows
    vector<ll> maxis(n);
    vector<ll> minis(n);
    vector<pair<ll,ll>>p;
    for (int i = 0 ; i < n ; i++)
    {
        maxis[i] = max(maxup[i],maxdown[i]);
        minis[i] = min(minup[i],mindown[i]);
    }

    //listing all min r for all l
    for (int i = 0; i < n; i++)
        p.push_back({minis[i],maxis[i]});
    
    vector<ll>vp(2*n+1,LLONG_MAX);
    for (int i = 0; i < n; i++)
        vp[p[i].first] = min(vp[p[i].first],p[i].second);
    

    for(int i = 2*n-1 ; i >=1 ; i--)
    {
        ll minim = min(vp[i],vp[i+1]);
        vp[i] = minim;
        
    }
    
    ll ans = 0 ;
    for (int i = 1; i < 2*n+1; i++)
    {
        if(vp[i]!=LLONG_MAX)
        ans+=(2*n-vp[i]+1);
    }
    
    cout<<ans<<endl;
}

//-------------------------------//
//             MAIN              //
//-------------------------------//
int main()
{
    fastio;
    int t = 1;
    cin >> t; // uncomment if multiple test cases
    while (t--)
        solve();
    return 0;
}







