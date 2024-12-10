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
ll n,m,q;
cin>>n>>m>>q;
map<ll,ll>mp;
 
vector<ll> vec;
for(ll i=0;i<m;i++){
    ll k;
    cin>>k;
    vec.push_back(k);
mp[k]++;}
vector<ll> que;
for(ll i=0;i<q;i++){
    ll a;
    cin>>a;
    que.push_back(a);
}
sort(vec.begin(),vec.end());
for(ll j=0;j<q;j++){
ll ps=que[j];ll p1=0;ll p2=0;
 
if(mp[ps]>0){
    cout<<0<<endl;
}
else if(ps<vec[0]){
    p1=vec[0];
    cout<<p1-1<<endl;
} 
else if(ps>vec[m-1]){
    p1=vec[m-1];
    cout<<n-p1<<endl;
}
else{
    ll p=0; ll r=m-1;ll c=0;
    bool check=true;
    while(check){
        c=(p+r)/2;
        if(ps<vec[c]&&ps<vec[c+1]){
            r=c;
        }
        else if(ps>vec[c]&&ps>vec[c+1]){
            p=c;
        }
        else{
            p1=vec[c];p2=vec[c+1];check=false;
        }
    }
 
       ll d=min(ps-p1,p2-ps);
   ll k= max(ps-p1,p2-ps)-d;
   cout<<d+k/2<<endl;
   
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