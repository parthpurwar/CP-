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
ll n,r;
cin>>n>>r;
vector<ll> vec;
ll ans=0;
ll l=0;
ll s=0;
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	vec.push_back(k);
	ans+=(k/2)*2;
l+=k%2;
r-=(k/2);
}
if(l%2==0){
	r=min(r,l)-l/2;
	r=r*2;ans+=r;
	cout<<ans<<endl;return 0;
}
else{
	r--;l--;ans++;
	r=min(r,l)-l/2;
	r=r*2;ans+=r;
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