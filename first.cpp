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
vector<ll> dif;
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	vec.push_back(k);
	
}
if(n==1){cout<<1<<endl;return 0;}
else if(n==2){
	cout<<vec[1]-vec[0]<<endl;;
	return 0;
}

sort(dif.begin(),dif.end());
// for(ll i=0;i<dif.size();i++){
// 	cout<<dif[i]<<' ';
// }
// cout<<endl;
if(n%2==1){
	vector<ll> f;
	vector<ll> s;
	for(ll i=0;i<n-2;i+=2){
		f.push_back(vec[i+1]-vec[i]);
	}
	for(ll j=1;j<n-1;j+=2){
		s.push_back(vec[j+1]-vec[j]);
	}
	sort(f.begin(),f.end());
	sort(s.begin(),s.end());
	ll i=f.size()-1;
	while(s[i]==f[i]){i--;}
	cout<<min(f[i],s[i])<<endl;
	}
	if(i==f.size()-1){cout<<min(f[i-1],s[i-1])<<endl;}
	
else{
	ll s=0;
	for(ll i=0;i<n;i+=2){
		s=max(s,vec[i+1]-vec[i]);
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