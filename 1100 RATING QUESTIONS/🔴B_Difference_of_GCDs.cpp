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
    ll n, l, r;
    cin >> n >>l >> r;
    vector<ll>ans;
    bool poss = true;
    for (int i = 1; i <= n; i++)
    {
        if(l%i==0){
            ans.push_back(l);
        }
        else{
            ll j = l/i;
            j = (j+1)*i;
            if(j%i==0) {
                if(j>=l && j<=r){
                    ans.push_back(j);
                }
                else {
                    poss = false;
                    break;
                }
            }
  
        }
    }

    if(poss==false) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(auto &x : ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
