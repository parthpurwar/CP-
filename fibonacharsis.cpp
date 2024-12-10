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
ll ans=0;
bool check= true;
ll a=(n/2)+(n%2);
while(a<=n){
	vector<ll> vec;
	vec.push_back(n);
	vec.push_back(a);
	ll i=2;
	while(i<k){
		ll d=vec[i-2]-vec[i-1];
		if(d>vec[i-1]){
			i=k;
		}
		else if(d<0){
			i=k;
		}
		else{
			vec.push_back(d);

					}
					i++;
	}
if(vec.size()==k){
	ans++;
}
a++;
}
cout<<ans<<endl;
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