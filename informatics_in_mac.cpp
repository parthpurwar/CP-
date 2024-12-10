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
ll solve(vector<ll>vec,ll l,ll r){
    map<ll,ll>mp;
    ll a=0;
    for(ll i=l;i<=r;i++){
                mp[vec[i]]=1;
        if(mp[a]==1){
            while(mp[a]==1){
                a++;
            }
        }
    }
    return a;
}
int mahadev()
{
ll n;
cin>>n;
vector<ll> vec;
map<ll,vector<ll>> mpa;
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    mpa[k].push_back(i);
    vec.push_back(k);
}
ll k=0;
while(mpa[k].size()>0){
        k++;
    
}
cout<<k<<' ';
ll ans=0;
for(ll i=0;i<n;i++){
    map<ll,ll>mp;
    ll a=0;
    while(a<k&&i<n){
        cout<<mp[vec[i]]<<' ';
        if(vec[i]<k&&mp[vec[i]==0]){
            a++;
            mp[vec[i]]++;
        }
        i++;
    }
    cout<<a<<' ';
    if(a==k){
    ans++;}
}
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