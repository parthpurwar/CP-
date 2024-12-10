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
ll a,b;
cin>>a>>b;
if(a==b){
	cout<<1<<endl;
	cout<<a<<endl;
}
else if(b>a){
	ll s=3*a;
	cout<<3<<endl;
	cout<<s-(2*b)-1<<' '<<b<<' '<<b+1<<endl;
}
else{
	cout<<3<<endl;
	ll s=3*a;
	cout<<b-1<<' '<<b<<' '<<s-(2*b)+1<<endl;
}
return 0;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

mahadev();

 return 0;
}