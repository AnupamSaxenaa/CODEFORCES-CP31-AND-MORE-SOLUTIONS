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

void solve() {
    // ✅ Write your logic here
    int n;
    cin>>n;
    if (n==2)
    {
        cout<<"Yes"<<"\n";
        return;
    }
    
    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }

    int curr = v[0];
    int cnt = 1;
    int var = 1;
    vector<int>chk;
    chk.push_back(curr);

   for (int i = 1; i < n; i++)
   {
    if(v[i]==curr) cnt++;
    else if(v[i]!=curr)
    {
        auto it = find(chk.begin(),chk.end(),v[i]);
        if(it!=chk.end())
    }
   }
   
   if(cnt==0 || cnt==1 || cnt==-1)
   {
    cout<<"Yes"<<"\n";
    return;
   }
   cout<<"No"<<"\n";
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}