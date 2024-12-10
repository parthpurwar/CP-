    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
    #define lld long double;
    #define f(i,a,b) for(int i = a; i < b; i++);
    #define fe(i,a,b) for(int i = a; i >= b; i--);
    #define vll vector<ll>;
    #define pb push_back;
    #define pii pair<int, int>;
    #define si set<int>;
    #define sc set<char>;
    #define mii map<int, int>;
    #define sor(v) sort(v.begin(),v.end());
    #define all(v) v.begin(),v.end();
    int mahadev()
    {
    ll x,y,k;
    cin>>x>>y>>k;
    while(k&&x!=1){
                ll d=((x/y)+1)*y;
                ll l=max(1ll, d);
                l=min(k,l);
                x+=l;
                k-=l;
            
        
        
        while(x%y==0){
            x/=y;
        }
            

    }
    cout<<x<<endl;
    return 0;
    }
    int main()
    {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tc;cin>>tc;
    while(tc--)
    {
    mahadev();
    }
    return 0;
    }