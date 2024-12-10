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
cin>>s;
ll a=0;
ll a1=0;ll a2=1;ll k=0;
char c=s[0];
for(ll i=0;i<s.size();i++){
if(s[i]==c){a++;}
else{
	a2=a2*(a%998244353);
	a2=a2%998244353;

		k++;
	

		a1+=a-1;
	a=1;c=s[i];
}}
a2=a2*(a%998244353);
k++;
ll b=s.size()-k;
a1+=a-1;
a2=a2%998244353;


for(ll j=1;j<=b;j++){
	a2=a2*(j%998244353);
}



cout<<a1<<' '<<a2<<endl;
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