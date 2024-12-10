#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int mahadev()
{
ll n;
cin>>n;
vector<ll>a;
vector<ll>b;
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    a.push_back(k);
}
for(ll i=0;i<=n;i++){
    ll k;
    cin>>k;
    b.push_back(k);
}
bool check=false;
for(ll i=0;i<n;i++){
    if(b[n]<max(a[i],b[i])&&b[n]>min(a[i],b[i])){
        check=true;
    }
}
ll ans=0;
if(check){
    for(ll i=0;i<n;i++){
        ans+=abs(a[i]-b[i]);
    }
    ans+=1;
    cout<<ans<<endl;
}
else{
    ll m=INT_MAX;
    for(ll i=0;i<n;i++){
        ll s=min(abs(b[n]-b[i]),abs(b[n]-a[i]));
        m=min(s,m);
    }
for(ll i=0;i<n;i++){
        ans+=abs(a[i]-b[i]);
    }
  ans+=m+1;
  cout<<ans<<endl;
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