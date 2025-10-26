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
    // write your solution here
    string s;
    cin >> s;
    ll n = s.size();

    if (s.size() == 1)
    {
        if (s[0] == '0')
            cout << 0 << endl;
        else
            cout << 1 << endl;
        return;
    }

    bool zero = false;
    for (auto &x : s)
    {
        if (x == '0')
        {
            zero = true;
            break;
        }
    }

    if (zero == false)
    {
        cout << n * n << endl;
        return;
    }

    int l = 0, r = n - 1;

    ll cnt = 0;
    ll ans = LLONG_MIN;
    while (l < n)
    {
        if (s[l] == '0')
            break;
        l++;
        cnt++;
    }

    while (r >= 0)
    {
        if (s[r] == '0')
            break;
        r--;
        cnt++;
    }

    ans = max(ans, ((cnt + 1) * (cnt + 1)) / 4);

    cnt = 0;

    while (l != r)
    {
        if (s[l] == '1')
            cnt++;
        else
        {
            ans = max(ans, ((cnt + 1) * (cnt + 1)) / 4);
            cnt = 0;
        }

        l++;
    }
    ans = max(ans, ((cnt + 1) * (cnt + 1)) / 4);

    cout<<ans<<endl;
}

int main()
{
    fastio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}