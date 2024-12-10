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
ll n,q;
cin>>n>>q;
vector<ll> vec;
vector<ll> que;
vec.push_back(0);
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	vec.push_back(k);
}
for(ll i=0;i<q;i++){
	ll k;
	cin>>k;
	que.push_back(k);
}
sor(vec);
map<ll,ll> c;

for(ll i=1;i<=n;i++){
	c[(n-i)*i+i-1]++;
}
for(ll i=1;i<n;i++){
	c[(n-i)*i]+=vec[i+1]-vec[i]-1;
}

for(ll i=0;i<q;i++){
	cout<<c[que[i]]<<' ';
}

cout<<endl;
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