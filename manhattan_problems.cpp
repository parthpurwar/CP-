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
if(k&1){cout<<"NO"<<endl;return 0;}
if(n%2==0){
	if(k>(n*n)/2){cout<<"NO"<<endl;return 0;}
cout<<"YES"<<endl;
map<ll,ll> mp;
ll i=1;ll j=n;
while(k){
	if(2*(j-i)>k){if((n/2-i)>(j-n/2-1)){i++;}
					else{j--;}}
	else if(2*(j-i)<=k){mp[i]=j;mp[j]=i;k-=2*(j-i);i++;j--;}
}
for(ll i=1;i<=n;i++){
	if(mp[i]!=0){cout<<mp[i]<<' ';}
	else{cout<<i<<' ';}
}
cout<<endl;
}
else{
	if(k>((n*n)-1)/2){cout<<"NO"<<endl;return 0;}
cout<<"YES"<<endl;
map<ll,ll> mp;
ll i=1;ll j=n;
while(k){
	if(2*(j-i)>k){if(((n+1)/2-i)>(j-(n+1)/2)){i++;}
					else{j--;}}
	else if(2*(j-i)<=k){mp[i]=j;mp[j]=i;k-=2*(j-i);i++;j--;}
}
for(ll i=1;i<=n;i++){
	if(mp[i]!=0){cout<<mp[i]<<' ';}
	else{cout<<i<<' ';}
}
cout<<endl;

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