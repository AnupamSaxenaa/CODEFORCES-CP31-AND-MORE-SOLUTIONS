#include <bits/stdc++.h>
using namespace std;

//-------------------------------//
//          MACROS               //
//-------------------------------//
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'

//-------------------------------//
//          TYPEDEFS             //
//-------------------------------//
using ll = long long;
using vi = vector<int>;

//-------------------------------//
//        CONSTANTS              //
//-------------------------------//
const ll MOD = 998244353;

//-------------------------------//
//     MODULAR FACTORIAL         //
//-------------------------------//
ll fact_mod(ll n)
{
    ll res = 1;
    for (ll i = 1; i <= n; i++)
        res = (res * i) % MOD;
    return res;
}

//-------------------------------//
//           SOLVE               //
//-------------------------------//
void solve()
{
    string s;
    cin >> s;

    int cnt = 1;
    ll min_ops = 0;
    vi a;

    // GET CONTIGUOUS SUBSTRING LENGTHS
    for (int i = 0; i < (int)s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            cnt++;
        else
        {
            if (cnt > 1)
                a.pb(cnt);
            cnt = 1;
        }
    }
    if (cnt > 1)
        a.pb(cnt);

    // NO OPERATIONS NEEDED
    if (a.empty())
    {
        cout << 0 << " " << 1 << endl;
        return;
    }

    // MINIMUM OPERATIONS
    for (int x : a)
        min_ops += (x - 1);

    // COMBINATIONS (MOD SAFE)
    ll combos = 1 , sum = 0;
    for (int x : a)
        {
            combos = (combos*x)%MOD;
        }
    
    combos = (combos*fact_mod(min_ops))%MOD;

    cout << min_ops << " " << combos << endl;
}

//-------------------------------//
//             MAIN              //
//-------------------------------//
int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
