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
ll arr[2][n];
for(ll i=0;i<2;i++){
	for(ll j=0;j<n;j++){
		cin>>arr[i][j];
	}
}
ll ans=0;
ll s=INT_MAX;
s=s*(-1);
for(ll i=0;i<n;i++){
	ans+=max(arr[0][i],arr[1][i]);
	s=max(s,min(arr[1][i],arr[0][i]));
}
ans+=s;

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