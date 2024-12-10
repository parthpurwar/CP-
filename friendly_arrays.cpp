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
ll n,m;
cin>>n>>m;
vector<ll>av;
vector<ll> bv;
ll b=0;
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	av.push_back(k);
}
for(ll j=0;j<m;j++){
	ll k;
	cin>>k;
	bv.push_back(k);
	b=b|k;
}
	ll x=0;
	ll s=0;
	for(ll i=0;i<n;i++){
		x=x^av[i];
		s=s^(av[i]|b);
	}
	cout<<min(x,s)<<' '<<max(x,s)<<endl;

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