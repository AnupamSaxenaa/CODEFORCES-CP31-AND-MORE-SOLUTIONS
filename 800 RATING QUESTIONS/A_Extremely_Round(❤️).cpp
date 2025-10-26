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

    //SOLUTION 1 (GETTING TLE)
    // int cnt = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     int x = 0;
    //     string s = to_string(i);
    //     for (int j = 0; j < s.size(); j++)
    //     {
    //         if(s[j]!='0')
    //              x++;
    //     }
    //     if(x==1) cnt++;
    // }
    // cout<<cnt<<"\n";
    
    //SOLUTION 2

    int cnt = 0;
    for (int i = 1; i <= 9; i++)
    {
        long long num = i;
        while (n>=num)
        {
            cnt++;
            num*=10;
        }
        
    }
    
    cout<<cnt<<"\n";
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}