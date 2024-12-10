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
string a;
string b;
cin>>a>>b;
ll i=0;
while(a[i]==b[i]&&i<a.size()){
  i++;
}
string c;
string d;

for(ll j=0;j<i;j++){
  c.push_back(a[j]);
  d.push_back(a[j]);
}

if(i<a.size()){
c.push_back(max(a[i],b[i]));
d.push_back(min(a[i],b[i]));
for(ll j=i+1;j<a.size();j++){
  c.push_back(min(a[j],b[j]));
  d.push_back(max(a[j],b[j]));
}}
cout<<c<<endl<<d<<endl;


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