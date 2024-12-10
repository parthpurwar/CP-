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
for(ll i=0;i<s.size();i++){
mp[s[i]]++;
}
char mx=s[0];
char mn=s[0];
for (const auto &pair : mp) {
	ll m=pair.second;
	char c=pair.first;
        if(m>=mp[mx]){
        	mx=c;
        }
        if(m<=mp[mn]){
        	mn=c;
        }
    }
ll i=0;
if(mn==mx){
	while(s[i]==mx){
		i++;
	}
	s[i]=mn;
	cout<<s<<endl; return 0;
}
while(s[i]!=mn){
	i++;
}
s[i]=mx;
cout<<s<<endl;return 0;
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








