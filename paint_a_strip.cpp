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
if(n==1){
	cout<<1<<endl;return 0;
}
else if(n<=4){
	cout<<2<<endl;return 0;
}
else{
	if(n<=10){
		cout<<3<<endl;return 0;
	}
	else{
		n=n/10;
		ll k=log2l(n);
		ll a=1<<k;
		if(n==a){
			cout<<k+4<<endl;return 0;
		}
		cout<<k+5<<endl;
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