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
    int a,b,c;
    cin>>a>>b>>c;

    if(c%2==0)
    {
        int turn1 = a+c/2;
        int turn2 = b+c/2;
        if(turn1==turn2)
        {
            cout<<"Second"<<"\n";
            return;
        }
        else if(turn1>turn2)
        {
            cout<<"First"<<"\n";
            return;
        }
        else
        {
            cout<<"Second"<<"\n";
            return;
        }
    }
    else
    {
        int turn1 = a+(c/2+1);
        int turn2 = b+c/2;
        if(turn1==turn2)
        {
            cout<<"Second"<<"\n";
            return;
        }
        else if(turn1>turn2)
        {
            cout<<"First"<<"\n";
            return;
        }
        else
        {
            cout<<"Second"<<"\n";
            return;
        }
    }

}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}