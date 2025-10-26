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
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }
    
    int evens = 0;
    int odds = 0;
    vector<int>oddnums;
    for (int i = 0; i < n; i++)
    {
        if(v[i]%2==0) evens += v[i];
        else
        {
            odds += v[i];
            oddnums.push_back(v[i]);
        }
    }


    if(evens!=0 && odds!=0)
    {
        if(odds%2==0) 
        {
            cout<<"YES"<<"\n";
            return;
        }
        cout<<"NO"<<"\n";
        return;
    }

    else if(odds==0)
    {
        cout<<"YES"<<"\n";
        return;
    }

    else{
        if (oddnums.size()%2==0)
        {
            cout<<"YES"<<"\n";
            return;
        }
        
                    cout<<"NO"<<"\n";
            return;
    }
    

}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}