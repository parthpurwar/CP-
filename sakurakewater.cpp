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
ll arr[n][n];
for(ll i=0;i<n;i++){
	for(ll j=0;j<n;j++){
		ll k;
		cin>>k;
		arr[i][j]=-1*k;;
	}
}
// for(ll i=0;i<n;i++){
// 	for(ll j=0;j<n;j++){
// 		cout<<arr[i][j]<<' ';
// 	}
// 	cout<<endl;
// }

ll i=n-1;
ll s=0;
ll j=0;
ll a=0;
while(i>=0){
	ll k=i;
	while(k<n){
		a=max(a,arr[k][j]);
		j++;k++;
	}
			s+=a;a=0;

	i--;j=0;
}
i=0;j=1;a=0;
while(j<n){
	ll k=j;
	while(k<n){
		a=max(arr[i][k],a);
		k++;i++;
	}
	s+=a;a=0;
	j++;i=0;
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