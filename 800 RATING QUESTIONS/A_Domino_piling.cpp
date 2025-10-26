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
    int m,n;
    cin>>m>>n;

    if(m<2 || n<1) 
    {
        cout<<0<<"\n";
        return;
    }

    int base_area_domino = 1*2;
    int base_area_board = m*n;

    int no_of_dominos = base_area_board/base_area_domino;
    cout<<no_of_dominos<<"\n";
}

int main() {
    fastio;

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}