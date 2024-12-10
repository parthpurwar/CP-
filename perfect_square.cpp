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
int arr[n][n];
for(ll i=0;i<n;i++){
	for(ll j=0;j<n;j++){
char c;cin>>c;
int x=int(c);
	arr[i][j]=x;
}}
for(ll i=0;i<n;i++){
	for(ll j=0;j<n;j++){
		cout<<arr[i][j]<<' ';
	}cout<<endl;}
	ll s=0;
for(ll i=0;i<n;i++){
	for(ll j=0;j<n;j++){
		
			ll a=arr[i][j];
			ll b=arr[j][n-i-1];
			ll c=arr[n-i-1][n-j-1];
			ll d=arr[n-j-1][i];
			ll k=max(arr[i][j],arr[j][n-i-1]);
			k=max(k,arr[n-i-1][n-j-1]);
			k=max(k,arr[n-i-1][j]);
			arr[i][j]=k;
			arr[j][n-i-1]=k;
			arr[n-i-1][n-j-1]=k;
			arr[n-j-1][i]=k;
			
			ll p=k-a+k-b+k-c+k-d;
			s+=p;
		
	}
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
