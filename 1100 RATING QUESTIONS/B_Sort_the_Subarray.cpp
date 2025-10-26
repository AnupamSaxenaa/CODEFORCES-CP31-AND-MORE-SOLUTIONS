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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    int l = 0, r = n - 1;

    while (l < n)
    {
        if (a[l] != b[l])
        {
            break;
        }
        l++;
    }

    while (r >= 0)
    {
        if (a[r] != b[r])
        {
            break;
        }
        r--;
    }

    // fully sorted
    if (r == -1 && l == n)
    {
        cout << 1 << " " << n << endl;
        return;
    }

    // expaning my window dude
    // expanding left
    ll comparator = b[l];
    while (l - 1 >= 0)
    {
        if (b[l - 1] <= comparator)
        {
            l--;
            comparator = b[l];
        }
        else
            break;
    }

    // expanding right
    comparator = b[r];
    while (r + 1 < n)
    {
        if (b[r + 1] >= comparator)
        {
            r++;
            comparator = b[r];
        }
        else
            break;
    }

    cout << l + 1 << " " << r + 1 << endl;
}

int main()
{
    fastio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}