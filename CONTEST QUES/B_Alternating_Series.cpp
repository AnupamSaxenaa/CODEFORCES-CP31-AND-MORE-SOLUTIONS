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
    int n;
    cin >> n;
 
    if(n==2 || n==3)
    {
        for (int i = 0; i < n; i++)
        {
            if(i%2==0) cout<<-1<<" ";
            else{
                cout<<n<<" ";
            }
        }
        cout<<"\n";
        return;
    }

    if(n%2==0)
    {
        for (int i = 0; i < n-1; i++) {
        if (i % 2 == 0) cout << -1 << " ";
        else{
            cout << 3 << " ";
        }
    }
    cout<<2<<" ";
    cout << "\n";
    }
    else{
            for (int i = 0; i < n; i++) {
        if (i % 2 == 0) cout << -1 << " ";
        else{
            cout << 3 << " ";
        }
    }
    cout << "\n";
    }
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}