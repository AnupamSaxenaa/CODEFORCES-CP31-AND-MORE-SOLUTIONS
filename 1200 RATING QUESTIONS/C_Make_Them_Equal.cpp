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
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    // if all of s equals c
    bool haha = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != c)
        {
            haha = true;
            break;
        }
    }
    if (haha == false)
    {
        cout << 0 << endl;
        return;
    }

    // looking for single settlement
    vector<bool> bitch(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] != c)
        {
            int d = i + 1;
            for (int j = 1; j * j <= d; j++)
            {
                if (d % j == 0)
                {
                    bitch[j] = true;
                    if (d / j <= n)
                        bitch[d / j] = true;
                }
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        if (bitch[i] == 0)
        {
            cout << 1 << endl;
            cout << i << endl;
            return;
        }
    }

    // last ma dono hi uthalo
    cout << 2 << endl;
    cout << n-1 << " " << n<<endl;
    return;
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



