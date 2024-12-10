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
vec.push_back(0);
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	vec.push_back(k);
}
sor(vec);
map<ll,ll>mp;
ll ans=INT_MAX;
for(ll i=1;i<=n;i++){
	ll j=n;
	while(vec[i]+vec[i+1]<=vec[j]&&j-i>=2){
		j--;
	}
	mp[i]=j;
	 ans=min(ans,ll(n-j+i-1));

}
// for(ll i=1;i<=n;i++){
// 	cout<<mp[vec[i]]<<' ';
// }
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