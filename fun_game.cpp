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
vector<ll> s;
vector<ll> t;

s.push_back(0);
t.push_back(0);
for(ll i=1;i<=n;i++){
    cin>>s[i];
} 
for(ll i=1;i<=n;i++){
    cin>>t[i];
} 

ll l=1;int r=n;
bool checkl=true;bool checkr=true;
while(checkl&&l<=n){
    if(s[l]==t[l]){l++;}
    else{checkl=false;}
}
while(checkr&&r>0){
    if(s[r]==t[r]){r--;}
    else{checkr=false;}
}
if(l>n||r==0){cout<<"YES"<<endl;return 0;}
ll d=l-1;
for(ll i=l;i<=r;i++){
    s[i]=s[i]^s[i-d];
}
string a;string b;
for(int i=0;i<=n;i++){
    a+=to_string(s[i]);
}
cout<<' ';
for(int i=0;i<=n;i++){
    b+=to_string(t[i]);
}
if(a==b){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
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