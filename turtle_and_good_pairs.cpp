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
string s;
cin>>s;
vector<char> vec;
map<char,ll> mp;
for(ll i=0;i<s.size();i++){
	if(mp[s[i]]==0){
vec.push_back(s[i]);
	}
	mp[s[i]]++;
}
ll ans=0;
for(ll i=0;i<vec.size();i++){
	ll a=mp[vec[i]];
	ll k=a*(a-1);
	k=k/2;
	ans+=k;
}
ll x=vec.size();
ll b=(x)*(x-1)*(x-2);
b=b/6;
ans+=b;
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