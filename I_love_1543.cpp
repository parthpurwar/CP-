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
ll n,m;
cin>>n>>m;
ll arr[n][m];
for(ll i=0;i<n;i++){
	for(ll j=0;j<m;j++){
		cin>>arr[i][j];
	}
}
ll ans=0;
ll j=0;
while(m-j>0&&n-j>0){
vector<ll> vec;
	for(ll i=j;i<m;i++){
		vec.push_back(arr[j][i]);
	}
	for(ll i=j+1;i<n;i++){
		vec.push_back(arr[i][m-1]);
	}
	for(ll i=m-2;i>=j;i--){
		vec.push_back(arr[n-1][i]);
	}
	for(ll i=n-2;i>=j+1;i--){
		vec.push_back(arr[i][j]);
	}
	vec.push_back(vec[0]);
	vec.push_back(vec[1]);
	vec.push_back(vec[2]);
	
	// for(ll i=0;i<vec.size();i++){
	// 	cout<<vec[i]<<' ';
	// }
	// cout<<endl;
	for(ll i=0;i<vec.size()-3;i++){
		if(vec[i]==1&&vec[i+1]==5&&vec[i+2]==4&&vec[i+3]==3){
			ans++;
		}
		
	}
n--;m--;j++;
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