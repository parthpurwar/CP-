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
if(n%2==0){
	ll k=log(n)/log(2);
	ll a=1<<k+1;
	ll b=1<<k;
	if(b!=n){
	cout<<a-1<<endl;
	
	for(ll i=1;i<=n;i++){
		if(i!=b&&i!=b+1&&i!=b-1){
			cout<<i<<' ';
		}
	}
	cout<<b+1<<' '<<b<<' '<<b-1<<endl;}
	else{
		cout<<a-1<<endl;
		for(ll i=1;i<=n;i++){
			if(i!=1&&i!=3&&i!=n-2&&i!=n-1&&i!=n){
				cout<<i<<' ';
			}
		}
		cout<<1<<' '<<3<<' '<<n-2<<' '<<n-1<<' '<<n<<endl;
	}
}
else{
	ll k=log(n)/log(2);
	ll h=1<<k+1;
	ll l=1<<k;
	cout<<n<<endl;
	if(n==h-1){
		for(ll i=1;i<=n;i++){
			if(i!=n&&i!=n-1&&i!=1&&i!=3){
				cout<<i<<' ';
		}	}
			cout<<3<<' '<<1<<' '<<n-1<<' '<<n<<endl;
		
	}
	else{
		for(ll i=1;i<=n;i++){
			if(i!=n&&i!=n-1&&i!=l-1&&i!=1){
				cout<<i<<' ';
			}
		}
		cout<<1<<' '<<l-1<<' '<<n-1<<' '<<n<<endl;
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