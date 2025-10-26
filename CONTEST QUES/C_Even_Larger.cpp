// SOLUTION 1

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef vector<ll> vll;

// void solve()
// {
//     int n;
//     cin >> n;
//     vll a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     ll operations = 0;

//     if (n == 2)
//     {
//         if (a[0] > a[1])
//             cout << a[0] - a[1] << "\n";
//         else
//             cout << 0 << "\n";
//         return;
//     }

//     for (int i = 1; i < n; i += 2)
//     {
//         if (a[i - 1] > a[i])
//         {
//             ll diff = a[i - 1] - a[i];
//             operations += diff;
//             a[i - 1] -= diff;
//         }
//         if (i+1<n && a[i + 1] > a[i])
//         {
//             ll diff = a[i + 1] - a[i];
//             operations += diff;
//             a[i + 1] -= diff;
//         }
//         if(i+1<n && a[i+1]+a[i-1]>a[i])
//         {
//             ll diff = a[i+1]+a[i-1]-a[i];
//             operations+=diff;
//             ll take = min(diff,a[i+1]);
//             a[i+1]-=take;
//         }
//     }

//     if(n%2==0)
//     {
//         if(a[n-2]>a.back())
//         {
//             operations+=a[n-2]-a.back();
//         }
//     }

//     cout << operations << "\n";
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

// SOLUTION 2

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
typedef vector<ll> vll;
typedef pair<int, int> pii;
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve()
{
    // ✅ Write your logic here
    int n;
    cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll operations = 0;

    if (n == 2)
    {
        if (a[0] > a[1])
            cout << a[0] - a[1] << "\n";
        else
            cout << 0 << "\n";
        return;
    }

    for (int i = 1; i < n - 1; i += 2)
    {
        if (a[i + 1] + a[i - 1] > a[i])
        {
            ll diff = a[i + 1] + a[i - 1] - a[i];
            operations += diff;
            ll take = min(diff, a[i + 1]);
            a[i + 1] -= take;
        }
    }

    if (n % 2 == 0)
    {
        if (a[n - 2] > a.back())
        {
            operations += a[n - 2] - a.back();
        }
    }

    cout << operations << "\n";
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