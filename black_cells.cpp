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
vector<ll> dif(n,0);
vector<ll> difl(n,0);
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	vec.push_back(k);
	if(i%2==0&&i>1){
		dif[i]=max(dif[i-2],vec[i-1]-vec[i-2]);
	}	
}
for(ll i=n-3;i>=0;i-=2){
	difl[i]=max(difl[i+2],vec[i+2]-vec[i+1]);
}
if(n==1){
	cout<<1<<endl;return 0;
}
 
if(n%2==0){
ll d=0;
ll ans=0;
for(ll i=1;i<n;i+=2){
d=vec[i]-vec[i-1];
ans=max(ans,d);
}
cout<<ans<<endl;
}
else{
	ll ans=INT64_MAX;
for(ll i=0;i<n;i+=2){
	 ll a=0;
	a=max(difl[i],dif[i]);
	ans=min(a,ans);}
 
cout<<ans<<endl;
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