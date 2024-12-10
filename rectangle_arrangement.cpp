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
ll arr[n][2];
for(ll i=0;i<n;i++){
	for(ll j=0;j<2;j++){
		ll k;
		cin>>arr[i][j];
	}
}
vector<ll> height;
vector<ll> width;
for(ll i=0;i<n;i++){
	height.push_back(arr[1][i]);
}
for(ll i=0;i<n;i++){
	width.push_back(arr[0][i]);
}
sort(height.begin(),height.end());
sort(width.begin(),width.end());
ll s=height[0]+width[0];
for(ll i=1;i<n;i++){
s+=(height[i]-height[i-1]);
s+=(width[i]-width[i-1]);
}
s+=height[n-1];
s+=width[n-1];
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