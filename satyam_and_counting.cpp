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
vector<ll> v1;
vector<ll> v0;
map<ll,ll> mp0;
map<ll,ll>mp1;
for(ll i=0;i<n;i++){
	ll a;ll b;
	cin>>a>>b;
	if(b==0){
		mp0[a]++;
		v0.push_back(a);
	}
	else{
		v1.push_back(a);
		mp1[a]++;
	}
}
sor(v0);sor(v1);
ll ans=0;

for(ll i=0;i<v1.size();i++){
	if(mp0[v1[i]]>0){
		ans+=(v1.size()-1);
		ans+=(v0.size()-1);
	}
	if(mp0[v1[i]+1]>0&&mp0[v1[i]-1]>0){
		ans++;
	}
}
for(ll i=0;i<v0.size();i++){
	
	if(mp1[v0[i]+1]>0&&mp1[v0[i]-1]>0){
		ans++;
	}
}


cout<<ans<<endl;return 0;

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