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
    vector<int>v;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        if(t==2) cnt++;
        v.push_back(t);
    }

    //OPTIMIZATION CONDITION
    if(cnt==0)
    {
        cout<<1<<"\n";
        return;
    }
    else if(cnt%2!=0)
    {
        cout<<-1<<"\n";
        return;
    }

    //NORMIE CASE
    int i = 0;    
    int j = 0;      
    while (i!=cnt/2 && j<n)
    {
        if(v[j]==2) i++;
        j++;
    }
    cout<<j<<"\n";
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}