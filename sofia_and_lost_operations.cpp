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
map <ll,ll> mp1;
map<ll,ll>mp2;
vector<ll> a;
vector<ll> b;
ll w=0;
for(ll i=1;i<=n;i++){
ll k;cin>>k;	a.push_back(k);
}
for(ll j=0;j<n;j++){
	ll k;
	cin>>k;
	b.push_back(k);
	mp2[k]++;
	if(a[j]!=k){
		mp1[k]++;w++;
	}
}
ll c=0;
ll m;
cin>>m;
vector<ll> d;
for(ll i=1;i<=m;i++){
	ll k;
	cin>>k;
	d.push_back(k);}
	for(ll i=0;i<m;i++){

	if(mp2[d[i]]==0){if(i==m-1||c>=m-w){cout<<"NO"<<endl;return 0;}c++;}
if(mp1[d[i]]>0){mp1[d[i]]--;}
}
for(ll i=0;i<n;i++){
	if(mp1[b[i]]>0){cout<<"NO"<<endl;return 0;}

}
cout<<"YES"<<endl;return 0;
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