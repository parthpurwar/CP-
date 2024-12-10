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
sort(vec.begin(),vec.end());
ll s=0;
ll hcf=gcd((vec[n-1]-vec[0]),(vec[n-1]-vec[1]));

for(ll i=2;i<n;i++){
hcf=gcd(hcf,(vec[n-1]-vec[i]));
}
if(n==1){hcf=1;}
if(n==2){hcf=vec[1]-vec[0];}
for(ll j=0;j<n-1;j++){
	s+=((vec[n-1]-vec[j])/hcf);
}
ll a=vec[n-1];
while(mp[a]!=0){
	a-=hcf;
}
if(n<((vec[n-1]-a)/hcf)){
	s+=n;
}
else{
	s+=(vec[n-1]-a)/hcf;
}


cout<<s<<endl;return 0;
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