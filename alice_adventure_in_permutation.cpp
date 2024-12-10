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
ll n,b,c;
cin>>n>>b>>c;
vector<ll> vec;

if(b==0){
	if(n-c==2){
		cout<<c+1<<endl;
	}
	else if(c>=n){
		cout<<n<<endl;
	}
	else if(n-c>2){
		cout<<-1<<endl;
	}
	else{
		cout<<n-1<<endl;
	}
	return 0;
}
if(n<=c){
	cout<<n<<endl;
	return 0;
}
ll ans=c;
ll k=(n-c-1)/b;
k=k*(b-1);
ans+=k;
k=(n-c-1)%b;
ans+=k;
if(c>n){
	ans=n;
}

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