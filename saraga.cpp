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
string s;
string t;
cin>>s>>t;

if(s.size()==1||t.size()==1){
	cout<<-1<<endl;return 0;
}
map<char,ll> mp;
for(ll i=1;i<s.size();i++){
	if(mp[s[i]]==0){
	mp[s[i]]=i;}
}
ll f=0; ll l=0;
ll sl=INT_MAX;
for(ll j=t.size()-2;j>=0;j--){

	if(mp[t[j]]>0){
		if(mp[t[j]]+t.size()-j<sl){
			f=mp[t[j]];l=j;
			sl=mp[t[j]]+t.size()-j;
		}
	}
}
if(f==0){
	cout<<-1<<endl;return 0;
}
for(ll i=0;i<f;i++){
	cout<<s[i];
}
for(ll i=l;i<t.size();i++){
	cout<<t[i];
}


cout<<endl;
return 0;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

mahadev();

 return 0;
}