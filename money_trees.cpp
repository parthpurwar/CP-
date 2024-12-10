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
ll n,k;
cin>>n>>k;
vector<ll> a;
vector<ll> h;
for(ll i=0;i<n;i++){
	ll b;
	cin>>b;
	a.push_back(b);
}
for(ll j=0;j<n;j++){
	ll b;
	cin>>b;
	h.push_back(b);
}
ll j=0;
ll ans=0;ll s=a[0];
if(a[0]<k){
	ans=1;
}
for(ll i=1;i<n;i++){
	if(h[i-1]%h[i]==0){
		if(s+a[i]<=k){
				s+=a[i];
				ans=max(ans,i-j+1);
		}
		else{
			ans=max(i-j,ans);
			while(s+a[i]>k){
				s-=a[j];j++;
			}
			s+=a[i];
			
		}
	}
	else{
		ans=max(i-j,ans);
		j=i;
		s=a[i];
		if(a[i]<=k){
			ans=max(ll(1),ans);
		}
	}
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