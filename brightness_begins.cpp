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
ll k;
cin>>k;
if(k==1){cout<<2<<endl;}
else{
ll r=sqrt(k);
ll a=r*r;
if(a==k){
	cout<<r+k<<endl;
}
else{
	ll b=(r+1)*(r+1);
	if(r+k<b){
		cout<<r+k<<endl;
	}
	else{
		cout<<r+k+1<<endl;
	}
}}
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