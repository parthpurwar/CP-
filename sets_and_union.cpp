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

bool search(ll n,arr[])



int mahadev()
{
ll n;
cin>>n;

ll l=0;
ll arr[n][51];
for(ll i=0;i<n;i++){
	ll a;
	cin>>a;
	for(ll j=1;j<=a;j++){
		cin>>arr[i][j];
		l=max(l,arr[i][j]);
	}
}
ll s=0; ll ans=0;
for(ll k=1;k<=l;k++){
	for(ll a=0;a<n;a++){
		for(ll b=1;b<=arr[a][0];b++){

		}
	}
}



cout<<ans-b<<endl;return 0;
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