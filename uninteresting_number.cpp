#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define lld long double;


#define sor(v) sort(v.begin(),v.end());
#define all(v) v.begin(),v.end();
int mahadev()
{
ll n;
cin>>n;
ll s=0;
map<ll,ll> mp;
while(n){
	ll a=n%10;
	mp[a]++;
	s+=a;
	n=n/10;
}
mp[2]=min(mp[2],ll(9));
mp[3]=min(mp[3],ll(2));
ll a=6*mp[3];
while(mp[2]>0){
	if(s%9==0){
		cout<<"YES"<<endl;
		return 0;
	}
	if((a+s)%9==0||(s+6)%9==0){
		cout<<"YES"<<endl;return 0;
	}
	s+=2;
	mp[2]--;
}
if((a+s)%9==0||(s+6)%9==0){
		cout<<"YES"<<endl;return 0;
	}
if(s%9==0){
	cout<<"YES"<<endl;
	return 0;
}
cout<<"NO"<<endl;
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