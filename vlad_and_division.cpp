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
map<ll,ll> mp;
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	vec.push_back(k);
	mp[k]++;
}
ll ans=0;
// cout<<0^
ll c=1<<30;
ll k=1<<30;
k--;
c=c|k;
ll m=c^0;

// for(ll i=0;i<n;i++){
// 	cout<<mp[vec[i]]<<' ';
// }
// cout<<endl;

for(ll i=0;i<n;i++){

	if(mp[c^vec[i]]>0&&mp[vec[i]]>0){
		ans++;
		mp[c^vec[i]]--;
		mp[vec[i]]--;
		}
		
		// for(ll i=0;i<n;i++){
		// 	cout<<mp[vec[i]]<<' ';}
		}

ans=n-ans;
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