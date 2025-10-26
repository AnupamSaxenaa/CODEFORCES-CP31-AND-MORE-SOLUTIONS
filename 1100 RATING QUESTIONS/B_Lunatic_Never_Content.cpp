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

ll gcd(ll a, ll b)
{
    while (b)
    {
        ll temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve()
{
    // write your solution here
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    int l = 0, r = n - 1;
    ll gcdd = 0;
    while (l < r)
    {
        ll diff = abs(a[l] - a[r]);
        gcdd = gcd(gcdd, diff);
        l++;
        r--;
    }

    cout << gcdd << endl;
    return;
}

int main()
{
    fastio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}