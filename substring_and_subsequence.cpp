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
string a,b;
cin>>a>>b;ll ans=0;
for(int i=0;i<b.size();i++){
    ll j=0;ll s=0;
    while(a[j]!=b[i]&&j<a.size()){j++;}
    ll p=i;
for(ll k=j;k<a.size();k++){
    if(a[k]==b[p]){s++;p++;}
}
ans=max(s,ans);
}
cout<<a.size()+b.size()-ans<<endl;
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