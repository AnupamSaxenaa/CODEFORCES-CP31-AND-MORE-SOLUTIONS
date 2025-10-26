#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve()
{
    // ✅ Write your logic here
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }

    if(v[0]==v[n-1])
    {
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
        sort(v.begin(),v.end(),[](int a , int b){
            return a>b;
        });
        swap(v[1],v[n-1]);
        for(auto x : v)
            cout<<x<<" ";

            cout<<endl;
    }
         
}
int main()
{
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--)
        solve();

    return 0;
}