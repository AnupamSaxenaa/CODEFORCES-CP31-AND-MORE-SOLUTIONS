void solve() {
    // Your logic here
    ll n; cin>>n; vl a(n); for(auto &x : a) cin>>x;
   
    //tracking all set bits of each num tc - n*31 
    vector<ll>tr(31,0);
    for(int i = 0 ; i < n ; i++){
        int it = 1;
        ll num = a[i];
        for (int j = 0; j < 31; j++)
        {
            if((it & num)==1) tr[j]++;
            it = it<<1;
        }
    }

    dbg(tr);
}