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
	const int mod= 1e9+7;

int mahadev()
{
ll t;
cin>>t;
vector<ll> n;
vector<ll> k;
vector<ll> vec;
for(ll i=0;i<t;i++){
	ll a;
	cin>>a;
	n.push_back(a);
}
vec.push_back(1);
for(ll i=0;i<t;i++){
	ll b;
	cin>>b;
	k.push_back(b);
	vec.push_back(b);
}
sort(vec.begin(),vec.end());
map<ll,ll> mp;

mp[1]=2;
for(ll i=1;i<=t;i++){
	ll ans=mp[vec[i-1]];
	for(ll j=vec[i-1];j<vec[i];j++){
		ans=(ans*2)%mod;
	}
	mp[vec[i]]=ans;
}
for(ll i=0;i<t;i++){
	cout<<mp[k[i]]<<endl;
}

// for(ll i=0;i<t;i++){
// 	ll ans=1;
// 	ans=1<<k[i];
// 	ans=ans%mod;
// 	// ll ans=1;
// 	// 	for(ll j=1;j<=k[i];j++){
// 	// 	ans=(ans*2)%mod;
// 	// }
// 	cout<<ans<<endl;
// }


return 0;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

mahadev();

 return 0;
}