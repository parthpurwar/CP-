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
ll x,y,z,k;
cin>>x>>y>>z>>k;
if((x*y*z)<k){cout<<0<<endl;return 0;}
else{
	ll ans=0;
	vector<set<ll>>vec;
	ll a=0;ll b=0; 
	for(ll a=1;a<=x;a++){
		for(ll b=a;b<=y;b++){
			if(k%(a*b)==0){
			ll c=k/(a*b);
			// set<ll>st;
			if(c<=z){
			// st.insert(a);st.insert(b);st.insert(c);
			// vec.push_back(st);
				ans+=(x-a+1)*(y-b+1)*(z-c+1);
		}}
		}
	}
	// for(ll i=0;i<vec.size();i++){
	// 	auto it=vec[0].begin();
	// 	ll p=*it;it++;ll q=*it;it++ ; ll r=*it;
	// 	ans+=(x-p+1)*(y-q+1)*(z-r+1);
	// }
	cout<<ans<<endl;
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