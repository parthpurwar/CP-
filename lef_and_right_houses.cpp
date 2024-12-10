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
string s;
cin>>s;
vector<ll> f;
vector<ll>b;
f.push_back(0);
ll c=0;
for(ll i=0;i<n;i++){
if(s[i]=='0'){
    c++;}
f.push_back(c);
}
b.push_back(0);
c=0;
for(ll i=n-1;i>=0;i--){
if(s[i]=='1'){
    c++;}
b.push_back(c);
}
ll ans=0;

for(ll i=0;i<n;i++){
    
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