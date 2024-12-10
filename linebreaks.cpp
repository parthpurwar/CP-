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
vector<string> vec;
for( ll i=0;i<n;i++){
	string s;
	cin>>s;
	vec.push_back(s);
}
ll ans=0;ll i=0;
// for(ll i=0;i<n;i++){
// 	cout<<vec[i].size()<<' ';
// }
ll k=vec[0].size();
while(k<=m&&i<n){

		ans++;
		i++;	
		k+=vec[i].size();
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