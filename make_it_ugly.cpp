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
vector<ll>str;
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    str.push_back(k);
}
str.push_back(str[0]+1);
ll m=INT_MAX;ll c=0;
for(ll i=0;i<n;i++){
    if(str[i]==str[0]){c++;}
    else{m=min(m,c);c=0;}
}
if(c==n){
    cout<<-1<<endl;
}
else{
cout<<min(m,c)<<endl;}
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