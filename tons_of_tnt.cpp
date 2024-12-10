#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int mahadev()
{
ll n;
cin>>n;
vector<ll> vec;
vector<ll> div;
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    vec.push_back(k);
    if(n%(i+1)==0){
        div.push_back(i+1);
    }
}
div.pop_back();
ll s=0;
ll diff=0;ll mx=0;ll mn=INT_MAX;
while(div.size()){
ll r=div[div.size()-1];
for(ll j=0;j<n;j++){
    if((j+1)%r!=0){
        s+=vec[j];
    }
    else{
        s+=vec[j];
        mx=max(s,mx);
        mn=min(s,mn);
        s=0;
    }
}
div.pop_back();
diff=max(mx-mn,diff);
mx=0;mn=INT_MAX;s=0;
}
cout<<diff<<endl;
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