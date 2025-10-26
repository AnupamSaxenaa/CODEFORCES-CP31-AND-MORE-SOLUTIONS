#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    //SOLUTION 1
    // if (n % 2 == 1)
    //     cout << "YES\n";
    // else
    //     {
    //         if((n&(n-1))==0) cout<<"NO\n";
    //         else cout<<"YES\n";
    //     }

    //SOLUTION 2
    while (n%2==0)
        n/=2;
    
    if(n>1) cout<<"YES\n";
    else cout<<"NO\n";    
}

int main()
{
    fastio;
    int t;
    cin >> t;          // number of test cases
    while (t--)
        solve();
    return 0;
}
