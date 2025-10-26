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
    ll a, b, c;
    cin >> a >> b >> c;

    ll m1 = (2*b-c);
    ll m2 = (2*b-a);
    ll m3 = (a+c);

    if((m1>0 && m1%a==0) || (m2>0 && m2%c==0) || (m3%(2*b)==0)) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
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