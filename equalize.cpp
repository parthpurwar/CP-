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
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    vec.push_back(k);
    st.insert(k);
}
vector<ll>vec2;
ll ans=0;ll s=0;
for(auto it =st.begin();it!=st.end();it++){
ll k=*it;
vec2.push_back(k);
}
sort(vec2.begin(),vec2.end());
ll a=0;ll b=0;
while(b<vec2.size()){
	if(vec2[b]-vec2[a]<=n-1){
		b++;
		s=max(s,b-a);
	}
	else{a++;}
}
s=max(s,b-a);
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