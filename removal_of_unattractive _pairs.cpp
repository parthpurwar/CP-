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
map<char,ll> mp;
for(ll i=0;i<n;i++){
	mp[s[i]]++;
}
sort(s.begin(),s.end());
ll c=1;ll s=1;
for(ll i=1;i<s.size();i++){
if(s[i]==s[i-1]){c++;}
else{
	s=max(s,c);c=1;
}
}
if(s>n/2){
	ll k=n-s;
	cout<<s-k<<endl;
}
else{
	if(n%2==0){cout<<0<<endl;}
	else{cout<<1<<endl;}
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