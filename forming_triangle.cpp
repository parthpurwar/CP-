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
vector<ll> vec;
map<ll,ll>mp;
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    vec.push_back(k);
    mp[k]++;
}
ll ans=0;
sort(vec.begin(),vec.end());
for(ll i=0;i<n;i++){
    ll m=mp[vec[i]];
    if(mp[vec[i]]>0){
        ans+=((mp[vec[i]]*(mp[vec[i]]-1))/2)*i;
        if(mp[vec[i]]>2){
            ans+=(m*(m-1)*(m-2))/6;
        }
        mp[vec[i]]=0;
    }
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