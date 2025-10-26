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

void matrixRot180(vector<vector<ll>> &v, ll n, ll k)
{
    int l = 0, r = n - 1;
    ll ops = 0;
    while (l <= r)
    {
        if (l == r)
        {
            for (int i = 0; i < n / 2; i++)
                if (v[l][i] != v[r][(n - 1) - i])
                    ops++;
            break;
        }

        for (int i = 0; i < n; i++)
            if (v[l][i] != v[r][(n - 1) - i])
                ops++;

        l++;
        r--;
    }
    
    if(ops==k)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(ops<k){
        if(n%2==0){
            ll left = k-ops;
            if(left%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
}

void solve()
{
    // write your solution here
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> v(n, vector<ll>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    matrixRot180(v, n, k);
}

int main()
{
    fastio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}