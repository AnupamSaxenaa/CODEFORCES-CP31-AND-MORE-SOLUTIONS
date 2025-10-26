// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// // Fast IO
// #define fastio                   \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr)

// #define all(x) (x).begin(), (x).end()
// #define pb push_back
// #define ff first
// #define ss second
// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int, int> pii;
// #define rep(i, a, b) for (int i = a; i < b; ++i)

// void solve()
// {
//     // ✅ Write your logic here
//     long long a, b, xk, yk, xq, yq;
//     cin >> a >> b >> xk >> yk >> xq >> yq;

//     if (a == b)
//     {
//         // FOR KING
//         pair<long long, long long> p1 = {xk + a, yk + b};
//         pair<long long, long long> p2 = {xk + (-a), yk + b};
//         pair<long long, long long> p3 = {xk + a, yk + (-b)};
//         pair<long long, long long> p4 = {xk + (-a), yk + (-b)};
//         vector<pair<long long, long long>> v1 = {p1, p2, p3, p4};
//         // FOR QUEEN
//         pair<long long, long long> q1 = {xq + a, yq + b};
//         pair<long long, long long> q2 = {xq + (-a), yq + b};
//         pair<long long, long long> q3 = {xq + a, yq + (-b)};
//         pair<long long, long long> q4 = {xq + (-a), yq + (-b)};
//         vector<pair<long long, long long>> v2 = {q1, q2, q3, q4};

//         int cnt = 0;
//         for (int i = 0; i < 4; i++)
//         {
//             for (int j = 0; j < 4; j++)
//             {
//                 if (v1[i] == v2[j])
//                     cnt++;
//             }
//         }
//         cout << cnt << "\n";
//     }
//     else
//     {
//         // FOR KING
//         pair<long long, long long> p1 = {xk + a, yk + b};
//         pair<long long, long long> p2 = {xk + (-a), yk + b};
//         pair<long long, long long> p3 = {xk + a, yk + (-b)};
//         pair<long long, long long> p4 = {xk + (-a), yk + (-b)};
//         pair<long long, long long> p5 = {xk + b, yk + a};
//         pair<long long, long long> p6 = {xk + (-b), yk + a};
//         pair<long long, long long> p7 = {xk + b, yk + (-a)};
//         pair<long long, long long> p8 = {xk + (-b), yk + (-a)};
//         vector<pair<long long, long long>> v1 = {p1, p2, p3, p4, p5, p6, p7, p8};
//         // FOR QUEEN
//         pair<long long, long long> q1 = {xq + a, yq + b};
//         pair<long long, long long> q2 = {xq + (-a), yq + b};
//         pair<long long, long long> q3 = {xq + a, yq + (-b)};
//         pair<long long, long long> q4 = {xq + (-a), yq + (-b)};
//         pair<long long, long long> q5 = {xq + b, yq + a};
//         pair<long long, long long> q6 = {xq + (-b), yq + a};
//         pair<long long, long long> q7 = {xq + b, yq + (-a)};
//         pair<long long, long long> q8 = {xq + (-b), yq + (-a)};
//         vector<pair<long long, long long>> v2 = {q1,q2,q3,q4,q5,q6,q7,q8};
//         int cnt = 0;
//         for (int i = 0; i < 8; i++)
//         {
//             for (int j = 0; j < 8; j++)
//             {
//                 if (v1[i] == v2[j])
//                     cnt++;
//             }
//         }
//         cout << cnt << "\n";
//     }
// }

// int main()
// {
//     fastio;

//     int t = 1;
//     cin >> t; // Uncomment if multiple test cases
//     while (t--)
//         solve();

//     return 0;
// }

//BETTER WAY BUT THE SAME 

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

vector<pair<ll,ll>> getMoves(ll a , ll b , ll kx , ll ky)
{
    vector<pair<ll,ll>> moves = {{a,b},{-a,-b},{-a,b},{a,-b},{b,a},{-b,-a},{-b,a},{b,-a}};
    vector<pair<ll,ll>> ans;
    for(auto [dx,dy] : moves)
        ans.push_back({kx+dx,ky+dy});
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    return ans;    
}

void solve() {
    // ✅ Write your logic here
    ll a,b,kx,ky,qx,qy;
    cin>>a>>b>>kx>>ky>>qx>>qy;
    auto getmovesking = getMoves(a,b,kx,ky);
    auto getmovesqueen = getMoves(a,b,qx,qy);

    int cnt = 0;
    for(auto km : getmovesking)
        if(find(getmovesqueen.begin(),getmovesqueen.end(),km)!=getmovesqueen.end()) cnt++;
    
    cout<<cnt<<"\n";    
}

int main() {
    fastio;

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}