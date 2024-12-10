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
vector<ll> f;
vector<ll> s;
map<ll,vector<ll>> mp;
map<ll,ll>count;
for(ll i=0;i<n;i++){
ll a;ll b;
cin>>a>>b;
if(count[min(a,b)]==0){
f.push_back(min(a,b));}
s.push_back(max(a,b));
mp[min(a,b)].push_back(max(a,b));
count[min(a,b)]++;
}
sort(f.begin(),f.end());
for(ll i=0;i<f.size();i++){

	for(ll j=0;j<mp[f[i]].size();j++){
		cout<<f[i]<<' '<<mp[f[i]][j]<<' ';
	}
}
cout<<endl;return 0;
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