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
ll n,k;
cin>>n>>k;
map<ll,ll> mp;
vector<ll>p;

for(ll i=0;i<n;i++){
	ll a;
	cin>>a;
	if(mp[a]==0)
		{p.push_back(a);}
	mp[a]++;
}
sort(p.begin(),p.end());
if(k==1){
	ll s=0;
	for(ll i=0;i<p.size();i++){
		s=max(s,mp[p[i]]);}
		cout<<s<<endl;

}
else{

	ll s=mp[p[0]];ll ans=0;
	ll i=0;ll j=1;

	while(j<p.size()){

		if(j-i+1>k)
			{ans=max(ans,s);
			s-=mp[p[i]];
			 i++;}

		if(p[j]-p[j-1]==1)
			{s+=mp[p[j]];
			 j++;}
		else
			{i=j;
			ans=max(s,ans);
			s=mp[i];
			j++;}
	}

ans=max(s,ans);
cout<<ans<<endl;}
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