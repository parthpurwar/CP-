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
ll n,x;
cin>>n>>x;
map<ll,ll>mp;
vector<ll>vec;
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	mp[k]++;
	if(mp[k]==1){
	vec.push_back(k);}
}
sor(vec);
ll j=0;
for(ll i=0;i<vec.size();i++){
	if(mp[j]==0){
		cout<<j<<endl;
		return 0;
	}

	while(mp[vec[i]]>1){
		ll a=vec[i];
		while(mp[a]>0){
			a+=x;
		}
		mp[a]++;
		mp[vec[i]]--;
	}

	j++;
}
cout<<j+1<<endl;
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