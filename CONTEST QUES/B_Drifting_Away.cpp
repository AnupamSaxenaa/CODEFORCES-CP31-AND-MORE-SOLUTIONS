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
    ll r = 1;
    while (b)
    {
        if (b & 1)
            r = (r * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return r;
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
    string a;
    cin >> a;

    bool b = false;
    bool c = false;
    bool d = false;
    bool e = false;
    bool f = false;

    if (a.size() == 1)
    {
        cout << 1 << '\n';
        return;
    }

    // 1. consecutive ** & >< & >* & *<
    for (int i = 0; i + 1 < (int)a.size(); i++)
    {
        if (a[i] == '*' && a[i + 1] == '*')
        {
            b = true;
            break;
        }
        if (a[i] == '>' && a[i + 1] == '<')
        {
            d = true;
            break;
        }
        if (a[i] == '>' && a[i + 1] == '*')
        {
            e = true;
            break;
        }
        if (a[i] == '*' && a[i + 1] == '<')
        {
            f = true;
            break;
        }
    }

    // 2. >*< pattern
    for (int i = 0; i + 2 < (int)a.size(); i++)
    {
        if (a[i] == '>' && a[i + 1] == '*' && a[i + 2] == '<')
        {
            c = true;
            break;
        }
    }

    if (b || c || d || e || f)
    {
        cout << -1 << '\n';
        return;
    }

    // general case counting consecutive >>> and <<< alkng with *
    int g = 0, h = 0;
    int x = 1, y = 1;
    for (int i = 0; i + 1 < (int)a.size(); i++)
    {
        if ((a[i] == a[i + 1] && a[i] == '>') || (a[i] == '*' && a[i + 1] == '>') || (a[i] == '>' && a[i + 1] == '*'))
            y++;
        else
        {
            h = max(h, y);
            y = 1;
        }

        if ((a[i] == a[i + 1] && a[i] == '<') || (a[i] == '*' && a[i + 1] == '<') || (a[i] == '<' && a[i + 1] == '*'))
            x++;
        else
        {
            g = max(g, x);
            x = 1;
        }
    }
    // update with leftovers
    g = max(g, x);
    h = max(h, y);

    cout << max(g, h) << '\n';
}

//-------------------------------//
//             MAIN              //
//-------------------------------//
int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
