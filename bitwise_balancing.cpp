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
ll b,c,d;
cin>>b>>c>>d;
ll a=0;
ll i=1;
ll m=0;
while(m<64){
	ll x=i&b;
	if(x==0){
		ll y=d&i;
		if(y!=0){
			ll z=c&i;
			if(z==0){
				a=a^i;
			}
			else{
				cout<<-1<<endl;return 0;
			}
		}
	}
	else{
		ll y=d&i;
		if(y==0){
			ll z=c&i;
			if(z==0){
				cout<<-1<<endl; return 0;
			}
			else{
				a=a^i;
			}
		}
	
			
	}


	i=i<<1;
	m++;
}
cout<<a<<endl;
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