#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int mahadev()
{
ll n,x,y;
cin>>n>>x>>y;
vector<ll> vec;
map <ll,ll> mp;

for(ll i=0;i<n;i++){
	 ll k;
	cin>>k;
	vec.push_back(k);
	mp[k]++;
}
sort(vec.begin(),vec.end());
ll a=0;ll ans=0;
while(a<n-1){
	ll m=vec[a];
while(m<vec[n-1]){
	m+=y;
	if(mp[m]>0&&(m+vec[a])%x==0){ans+=mp[m];}

}
if((2*vec[a])%x==0&&vec[a-1]!=vec[a]){ans+=((mp[vec[a]])*(mp[vec[a]]-1)/2);}
a++;
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