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
vector<ll>vec;
set<ll>st;
map<ll,ll>mp;
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	vec.push_back(k);
	mp[k]++;
	st.insert(k);
}
vector<ll>num;
for(auto it=st.begin();it!=st.end();it++){
	ll a=*it;
	num.push_back(mp[a]);
}
sort(num.begin(),num.end());
ll s=0;ll b=num[num.size()-1];ll c=num.size()-1;
while(c+1&&b){
if(num[c]==b){
b--;s+=b;c--;
}
else{
	s+=vec[c];b=vec[c];c--;
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