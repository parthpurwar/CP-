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
vector<ll> vec;
vector<ll> d;
ll a=INT_MAX;
d.push_back(a);
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	vec.push_back(k);
	if(i>0){
		d.push_back(vec[i]-vec[i-1]);
	}
}
d.push_back(a);
ll m;
cin>>m;
ll arr[m][2];
for(ll i=0;i<m;i++){
	cin>>arr[i][0]>>arr[i][1];
}
vector<ll> one;
vector<ll> last;
ll s=0;
one.push_back(0);
one.push_back(1);
s=1;
for(ll i=1;i<n-1;i++){
if(vec[i]-vec[i-1]>vec[i+1]-vec[i]){
	s+=1;
}
else{
	s+=vec[i+1]-vec[i];
}
one.push_back(s);
}

last.push_back(0);
last.push_back(1);
s=1;
for(ll i=n-2;i>0;i--){
if(vec[i+1]-vec[i]>vec[i]-vec[i-1]){
	s+=1;
}
else{
	s+=vec[i]-vec[i-1];
}
last.push_back(s);
}
vector<ll> las;
for(ll j=0;j<n;j++){
	las.push_back(last[n-j-1]);
}

for(ll i=0;i<m;i++){
	if(arr[i][1]>arr[i][0]){
		cout<<one[arr[i][1]-1]-one[arr[i][0]-1]<<endl;
	}
	else{
		cout<<las[arr[i][1]-1]-las[arr[i][0]-1]<<endl;
	}
}
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