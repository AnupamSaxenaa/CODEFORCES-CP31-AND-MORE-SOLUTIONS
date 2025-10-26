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
    //INPUT
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }

    //ANS

    //EDGE CASE
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]>v[i+1])
        {
            cout<<0<<"\n";
            return;
        }
    }
    

    int min_gap = INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
        int diff = v[i+1]-v[i];
        if (diff==0)
        {
            cout<<1<<"\n";
            return;
        }

        if(min_gap>diff)
            min_gap = diff;
    }

    int operations = 0;
    if(min_gap%2==0) operations = (min_gap+1)/2+(min_gap+1)%2;
    else operations = min_gap/2+1;

    cout<<operations<<"\n";

}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}