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
ll n;ll m;
cin>>n>>m;
string s;
cin>>s;
set<ll> st;
for(ll i=0;i<m;i++){
int k;
cin>>k;
st.insert(k);
}
string c;
cin>>c;
sort(c.begin(),c.end());
vector<ll>vec;
for(auto it=st.begin();it!=st.end();it++){
    int k=*it;
    vec.push_back(k);
}
for(int i=0;i<vec.size();i++){
    s[vec[i]-1]=c[i];
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