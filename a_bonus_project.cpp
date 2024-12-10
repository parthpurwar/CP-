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
vector<ll> a;
vector<ll> b;
for(ll i=0;i<n;i++){
	ll x;
	cin>>x;
	a.push_back(x);
}
for(ll j=0;j<n;j++){
	ll x;
	cin>>x;
	b.push_back(x);
}
vector<ll> mx;
ll s=0;
for(ll i=0;i<n;i++){
	ll r=a[i]/b[i];
	mx.push_back(r);
	s+=r;
}
if(k>s){
	for(ll i=0;i<n;i++){
		cout<<0 <<' ';
	}
	cout<<endl;
	return 0;
}
vector<ll> ans(n,0);
ll i=n-1;
while(k>0){
	ans[i]+=min(k,mx[i]);
	k-=min(k,mx[i]);
	i--;
}
for(ll i=0;i<n;i++){
	cout<<ans[i]<<' ';
}
cout<<endl;return 0;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
mahadev();

 return 0;
}