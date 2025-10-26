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

// int doBS(vector<int> scores , int tester)
// {
//     int left = 0;
//     int right = scores.size()-1;

//     while(left<right)
//     {
//         int mid = (left+right)/2;
//         if(scores[mid]==tester) left = mid+1;
//         if(scores[mid]>tester)  left = mid+1;
//         if(scores[mid]<tester) right = mid-1;
//     }
//     return mid+1;
// }

void solve() {
    // ✅ Write your logic here
    int n , x , cnt = 0;
    cin>>n>>x;
    vector<int>scores;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        scores.push_back(t);
    }
    if(scores[0]==0){
        cout<<0<<"\n";
        return;
    }
    int tester = scores[x-1];

    for (int i = 0; i < n; i++)
    {
        if(scores[i]<tester || scores[i]==0)
        {
            cout<<i<<"\n";
            return;
        }
    }
    cout<<n<<"\n";
    
}

int main() {
    fastio;

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases
    while (t--) solve();

    return 0;
}