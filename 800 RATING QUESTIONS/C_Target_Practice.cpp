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
    int points = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            char c;
            cin>>c;
            if(c=='X')
            {
                if(j==0 || j==9 || i==0 || i==9) points+=1;
                else if(j==1 || j==8 || i==1 || i==8) points+=2;
                else if(j==2 || j==7 || i==2 || i==7) points+=3;
                else if(j==3 || j==6 || i==3 || i==6) points+=4;
                else points+=5;
            }
        }
        
    }
    cout<<points<<"\n";
    
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}