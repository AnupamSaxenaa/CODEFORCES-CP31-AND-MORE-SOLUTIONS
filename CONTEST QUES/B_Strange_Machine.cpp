#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve()
{
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    ll cntA = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            cntA++;
    }

    while (q--)
    {
        ll a;
        cin >> a;
        ll cnt = 0;

        if (cntA == n)
        {
            cout << a << endl;
            continue;
        }

        while (a > 0)
        {
            for (int i = 0; i < n && a > 0; i++)
            {
                if (s[i] == 'A')
                    a = a - 1;
                else
                    a = a / 2;
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}

int main()
{
    fastio
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
