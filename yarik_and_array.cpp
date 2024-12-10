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
ll n;
cin>>n;
map<ll,ll> mp;


vector<ll> vec;
ll ans=0;
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    if(k<=2){
        vec.push_back(k);
    }
    if(mp[k]==0){mp[k]++;
                }
    else{
        ans+=mp[k];
        mp[k]++;
        
    }
}
ans+=mp[1]*mp[2];

cout<<ans<<endl;
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