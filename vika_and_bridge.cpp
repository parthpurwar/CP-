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
vector<ll> c;
vector<ll> v;
map<ll,vector<ll>> mp;
for(ll i=0;i<n;i++){
	ll b;
	cin>>b;
	if(mp[b].size()==0){
		mp[b].push_back(0);
	}
	if(c[i]!=c[i-1]){
		mp[b].push_back()
	}
	c.push_back(b);
}


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