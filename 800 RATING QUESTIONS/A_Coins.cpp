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
    long long n,k;
    cin>>n>>k;

    if(n%2!=0)
    {
        if(k%2!=0 && (n-k)>=0){
            cout<<"YES"<<"\n";
            return;
        }
        cout<<"NO"<<"\n";
        return;
    }
    else{
        cout<<"YES"<<"\n";
    }

}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}