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
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(all(a));

    ll left = 1, right = 2e9;
    ll h = 0;
    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
        ll wat = 0;
        for (int j = 0; j < n; j++)
        {
            if (mid > a[j])
                wat += mid - a[j];
        }

        if (wat <= x)
        {
            h = mid; 
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << right << endl;
}

int main()
{
    fastio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}