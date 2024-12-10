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
ll w,b;
cin>>w>>b;
ll ans=0;
ll a=min(w,b);
ll s=1;
while(a>=s){
		a-=s;
		ans++;
		s++;
	
}
ll c=max(w,b);
s=ans+1;
while(c>=s){
		c-=s;
		ans++;
		s++;
}
cout<<ans<<endl;return 0;
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