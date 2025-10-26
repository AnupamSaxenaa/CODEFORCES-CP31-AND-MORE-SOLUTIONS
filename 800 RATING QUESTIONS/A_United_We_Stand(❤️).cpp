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

        // INPUT
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            v.push_back(t);
        }

        // ANSWER
        vector<int> b, c;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
                c.push_back(v[i]);
            else
                b.push_back(v[i]);
        }

        if (b.size() == 0)
        {
            auto it = max_element(c.begin(), c.end());
            int maxi = *it;
   
            int i = 0;
            vector<int> temp;
            while (i < c.size())
            {
                if (c[i] != maxi)
                    b.push_back(c[i]);

                else
                    temp.push_back(c[i]);

                i++;
            }
            if (b.size() == 0)
            {
                cout << -1 << "\n";
                return;
            }

            c = temp;
        }

        if (c.size() == 0)
        {
            auto it = max_element(b.begin(), b.end());
            int maxi = *it;

            int i = 0;
            vector<int> temp;
            while (i < b.size())
            {
                if (b[i] == maxi)
                    c.push_back(maxi);

                else if(b[i]!=maxi)
                    temp.push_back(b[i]);
                    
                    i++;
            }

            if (temp.size() == 0)
            {
                cout << -1 << "\n";
                return;
            }
            b = temp;
            
        }

        // OUTPUT
        if (b.size() == 0 || c.size() == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << b.size() << " " << c.size() << "\n";
            for (auto x : b)
            {
                cout << x << " ";
            }
            cout << "\n";

            for (auto x : c)
            {
                cout << x << " ";
            }
            cout << "\n";
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