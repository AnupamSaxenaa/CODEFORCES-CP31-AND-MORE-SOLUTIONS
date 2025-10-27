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
//           SOLVE               //
//-------------------------------//
void solve()
{
    // Your logic here
    ll n;
    cin >> n;
    vl a(n);
    for (auto &x : a)
        cin >> x;

    if (n == 1)
    {
        if (a[0] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    sort(all(a));
    bool haveTwoOnes = true;
    int cnt = 0;
    int i = 0;
    ll range = 0;
    while (a[i]==1)
    {
        cnt++;
        i++;
        range+=1;
    }
    if(cnt<2) haveTwoOnes = false;

    if (haveTwoOnes == false)
    {
        cout << "NO" << endl;
        return;
    }

    for (; i < n; i++)
    {
        if(a[i]<=range){
            range += a[i];
        }
        else {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout << "YES" << endl;
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