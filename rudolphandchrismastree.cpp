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
long double n,d,h;
cin>>n>>d>>h;
vector<long double> y;
for(ll i=0;i<n;i++){
	long double k;
	cin>>k;
	y.push_back(k);
}
long double a=0.000000;
long double m=d/h;
for(ll i=n-1;i>0;i--){
	long double diff=y[i]-y[i-1];
	if(diff<h){
		long double x=h-diff;

		long double y2=m*x;
		a+=(x*y2);
	}
}
long double ans=n*d*h;
ans-=a;
ans= ans/2.0;
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