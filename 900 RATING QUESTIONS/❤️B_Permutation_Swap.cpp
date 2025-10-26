#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define rep(i, a, b) for (int i = a; i < b; ++i)

int gcdd(int a , int b)
{
    while (b!=0)
    {
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int moduli(int a)
{
    if(a>=0) return a;
    return a*-1;
}

void solve() {
    // ✅ Write your logic here
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }

    for (int i = 1; i <= n; i++)
    {
        int temp = i - v[i-1];
        v[i-1] = moduli(temp);
    }

    int g = 0;
   for(auto x : v)
   {
        g = gcdd(g,x);
   }
   cout<<g<<"\n";
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}