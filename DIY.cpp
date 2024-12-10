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
vector<ll> vec2;
map<ll,ll> mp;
vector<ll> vec;
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
		mp[k]++;
	if(mp[k]==2){
		vec.push_back(k);
		mp[k]=0;
	}
}
if(vec.size()<4){
	cout<<"NO"<<endl;
	return 0;
}
cout<<"YES"<<endl;
sort(vec.begin(),vec.end());
ll m=vec.size();
ll p1=(vec[m-1]-vec[0])*(vec[m-2]-vec[1]);
ll p2=(vec[m-1]-vec[1])*(vec[m-2]-vec[0]);
if(p1>p2){
cout<<vec[0]<<' '<<vec[1]<<' '<<vec[0]<<' '<<vec[m-2]<<' '<<vec[m-1]<<' '<<vec[m-2]<<' '<<vec[m-1]<<' '<<vec[1];}
else{
	cout<<vec[0]<<' '<<vec[1]<<' '<<vec[0]<<' '<<vec[m-1]<<' '<<vec[m-2]<<' '<<vec[m-1]<<' '<<vec[m-2]<<' '<<vec[1];
}
cout<<endl;
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