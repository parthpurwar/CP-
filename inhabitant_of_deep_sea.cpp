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
vector<ll>vec;ll s=0;
for(ll i=0;i<n;i++){
	ll b;
	cin>>b;
	vec.push_back(b);
}
set<ll> st;
ll j=n-1;
ll a=k/2;
while(vec[j]<=a&&j>=0){
	if(vec[j]<=a){
		st.insert(j);a-=vec[j];j--;
	}
}
ll c=0;
if(k&1){
c=k/2+1;
}
else{
	c=k/2;
}
ll i=0;
while(vec[i]<=c&&i<n){
	if(vec[i]<=c){
		st.insert(i);c-=vec[i];i++;
	}
}
if(i==j&&a+c>0){
	if(vec[i]<=a+c){st.insert(i);}
}
cout<<st.size()<<endl;

// for(auto it=st.begin();it!=st.end();it++){
// 	cout<<*it<<' ';
// }
// cout<<endl;
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