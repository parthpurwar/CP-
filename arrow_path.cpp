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
char arr[2][n];

for(ll i=0;i<2;i++){
	for(ll j=0;j<n;j++){
		cin>>arr[i][j];
	}
}ll a=0;
for(ll k=0;k<n-1;k++){
	a=a^1;
	if(arr[a][k]=='<'&&arr[a^1][k+1]=='<'){cout<<"NO"<<endl;return 0;}
}
cout<<"YES"<<endl; return 0;
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