#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define rep(i,a,b) for(int i=(a);i<(b);++i)

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vl = vector<ll>;

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

void solve(){
    // write your solution here
    int n ;
    cin>>n;
    unordered_map<int,int>mpp;
    for (int i = n+1 ; i <= 9012; i++)
    {
        int target = i;
        for (int j = 0; j < 4; j++)
        {
            int l_d = target%10;
            target /= 10;
            mpp[l_d]++;
        }
        bool found = true;
        for(auto x : mpp)
        {
            if(x.second > 1){
                found = false;
                break;
            }
        }

        if(found==true)
        {
            cout<<i<<endl;
            return;
        }
        mpp.clear();
    }
    
}


int main(){
    fastio
    int t = 1;
    while(t--) solve();
    return 0;
}