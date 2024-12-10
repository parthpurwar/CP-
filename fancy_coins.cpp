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
ll m,k,a1,ak;
cin>>m>>k>>a1>>ak;
ll p1=m/k;
ll p2=m%k;
ll s=0;
if(p1>=ak){s+=p1-ak;}
if(a1>p2){
	ll d=a1-p2;
	d=d/k;
	if(d>=s){s=0;}
	else{
		s=s-d;
	}
}
else{
	s+=p2-a1;
}
cout<<s<<endl;
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