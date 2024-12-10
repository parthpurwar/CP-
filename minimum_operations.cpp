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
ll k;
cin>>n>>k;
ll x=0;
if(k==1){
	cout<<n<<endl;
}
else{
// while(pow(k,x)<=n){
// 	x++;
// }
	ll x=logk(n);
ll s=0;
while(n){
if(pow(k,x)<=n){
	ll r=pow(k,x);
	n=n-r;s++;
}
else if(x==0){
	s+=n;cout<<s<<endl; return 0;
}
else{x=logk(n);}
}
cout<<s<<endl;}
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