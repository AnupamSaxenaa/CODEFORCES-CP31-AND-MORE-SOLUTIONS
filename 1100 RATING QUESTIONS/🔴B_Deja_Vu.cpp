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
    ll n, q;
    cin >> n >> q;
    unordered_map<ll,ll>mpp;
    vector<ll> a(n);
    vector<ll> x(q);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < q; i++)
        cin >> x[i];


    
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mpp.find(x[i])==mpp.end())
            {
                if(a[j]%(long long)pow(2,x[i])==0) a[j] += (long long)pow(2,x[i]-1);
            }
            else{
                break;
            }
        }
        mpp[x[i]]++;
    }
    
    for(auto x : a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{
    fastio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}