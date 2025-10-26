#include <iostream>
#include <bits/stdc++.h>
#include <numeric>

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


//VERY OPTIMISED EUCLODEAN ALGO FOR GCD FINDING..
long long vgcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


void solve() {
    // ✅ Write your logic here
    long long n;
    cin>>n;
    long long a[n];
    bool one = false;
    for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==1) one = true;
        }

    if(one==true)
    {
        cout<<"Yes"<<endl;
        return;
    }    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vgcd(a[i],a[j])<=2)
            {
                cout<<"Yes\n";
                return;
            }
            
        }
        
    }
    
    cout<<"No\n";
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}