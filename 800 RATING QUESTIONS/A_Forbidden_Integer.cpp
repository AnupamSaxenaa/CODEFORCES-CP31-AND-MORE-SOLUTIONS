#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve()
{

    // ✅ Write your logic here
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES" << "\n";
        cout << n << "\n";
        for (int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << endl;
        return;
    }
    else if (k == 1)
        {
            cout << "NO" << "\n";
            return;
        }
    else if (n % 2 == 0)
    {
        cout << "YES" << "\n";
        cout << n / 2 << "\n";
        for (int i = 0; i < n / 2; i++)
            cout << 2 << " ";
        cout << endl;
        return;
    }
    else if (n % 2 != 0 && k >= 3)
    {
        cout << "YES" << "\n";
        if (n % 3 == 0)
        {
            cout << n / 3 << "\n";
            for (int i = 0; i < n / 3; i++)
                cout << 3 << " ";
            cout << endl;
            return;
        }
        else{
            cout<<(n-3)/2+1<<"\n";
            cout<<3<<" ";
            for (int i = 0; i < (n-3)/2; i++) cout<<2<<" ";
            cout<<endl;
            return;
            
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--)
        solve();

    return 0;
}