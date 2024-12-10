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
const int MOD = 998244353;

int mahadev()
{
ll n;
cin>>n;
vector<ll> vec;
map<ll,ll> mp;
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	if(mp[k]==0){
	vec.push_back(k);}
	mp[k]++;
}
sort(vec.begin(),vec.end());
ll ans=1;
if(vec.size()==1){
	for(ll i=1;i<=n;i++){
		ans=ans*(i%MOD);
	}
			ans=ans%998244353;

	cout<<ans<<endl;
}
else if(vec[vec.size()-1]-vec[vec.size()-2]>1){
	cout<<0<<endl;
}
else{
ll k=mp[vec[vec.size()-2]];
ans=ans*k;
for(ll i=1;i<=n;i++){
	if(i!=k+1){
	ans=ans*(i%MOD);
}
ans=ans%MOD;

}
cout<<ans<<endl;return 0;
}
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