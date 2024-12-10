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
ll m;
cin>>m;
ll arr[2][m];
for(ll i=0;i<2;i++){
	for(ll j=0;j<m;j++){
		cin>>arr[i][j];
	}
}
ll s1=0;ll s2=0;
vector<ll> su;
vector<ll> sd;
for(ll i=m-1;i>=0;i--){
	su.push_back(s1);
	s1+=arr[0][i];
}

sort(su.begin(),su.end(),greater<>());
// for(ll i=0;i<m;i++){
// 	cout<<su[i]<<' ';
// }
for(ll i=0;i<m;i++){
	sd.push_back(s2);
	s2+=arr[1][i];
}
 ll ans=INT64_MAX;
for(ll i=0;i<m;i++){
	ll s=max(su[i],sd[i]);
	ans=min(ans,s);
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