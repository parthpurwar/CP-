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
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	vec.push_back(k);
}
ll s=0;ll ans=0;
for(ll i=1;i<=n;i++){
	ll a=0;ll b=0;
	while(b<n){
		ll k=b;ll c=i;
		while(c--){
			s+=vec[k];k++;
		}
		if(s==0)
	}
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