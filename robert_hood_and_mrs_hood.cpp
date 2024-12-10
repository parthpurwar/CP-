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
ll n,d,k;
cin>>n>>d>>k;
ll arr[k][2];
for(ll i=0;i<k;i++){
	cin>>arr[i][0]>>arr[i][1];
}
vector<vector<ll>> vec;
vector<ll> st(1,1);
vec.push_back(st);
for(ll i=1;i<=n;i++){
	vector<ll> vc;
	for(ll j=0;j<k;j++){
		if(i<=arr[j][1]&&i>=arr[j][0]){
			vc.push_back(j+1);
		}
	}
	vec.push_back(vc);
}

ll i=1;ll j=d;
ll s=0;
for(ll i=1;i<=d;i++){
	s+=vec[i].size();
}
ll rb=1;ll rm=1;
ll sb=s;ll sm=s;
while(j<=n){
if(s<sm){
	sm=s;
	rm=i;
}
if(s>sb){
	sb=s;
	rb=i;
}
j++;
s-=vec[i].size();i++;
s+=vec[j].size();
}

cout<<rb<<' '<<rm<<endl;return 0;

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