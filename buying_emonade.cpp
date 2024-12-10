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
ll n,k;
cin>>n>>k;
vector<ll> vec;
map<ll,ll> mp;
for(ll i=0;i<n;i++){
		ll c;
		cin>>c;
		mp[c]++;
		if(mp[c]==1){
		vec.push_back(c);}
}ll a=0;ll c=0;
ll s=0;ll d=0;
sort(vec.begin(),vec.end());
if(vec[0]*n>=k){
	cout<<k<<endl;
}
else{
while(k){

if(k>0){
    s+=min(k,(vec[a]-d)*(n-c));
k-=min(k,(vec[a]-d)*(n-c));
}
if(k>0){
	s+=mp[vec[a]];
}
d=vec[a];
c+=mp[vec[a]];
a++;
}
cout<<s<<endl;
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