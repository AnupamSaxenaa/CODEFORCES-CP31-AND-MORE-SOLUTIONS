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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int diff_x = a - c;
    int diff_y = b - d;

    if (diff_x == 0 && diff_y == 0)
    {
        cout << 0 << "\n";
        return;
    }
    else if (diff_x == 0)
    {
        if (diff_y < 0)
        {
            cout << (diff_y * 2)*-1 << "\n";
            return;
        }
        else
        {
            cout << -1 << "\n";
            return;
        }
    }
    else if (diff_y == 0)
    {
        if (a > c)
        {
            cout << a - c << "\n";
            return;
        }
        else
        {
            cout << -1 << "\n";
            return;
        }
    }
    else{
        if(b>d)
        {
            cout << -1 << "\n";
            return;
        }
        else{
            int operations = 0;
            operations+=(d-b);
            a+=operations;
            b+=operations;
            if (a<c)
            {
                            cout << -1 << "\n";
            return;
            }
            else
            {
                operations+=(a-c);
                cout<<operations<<"\n";
                return;
            }
            
        }
    }
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