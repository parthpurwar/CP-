#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int mahadev()
{
ll n;
cin>>n;
vector<ll>vec;
vector<ll>b;
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    
    b.push_back(k);
    vec.push_back(k);
}
sort(vec.begin(),vec.end());
vector<ll>sum;
ll s=0;
for(ll i=0;i<n;i++){
s+=vec[i];
sum.push_back(s);
}
map<ll,ll> mp;
for(ll j=0;j<n;j++){
    ll r=j;
    ll k=j+1;
    while(sum[j]>=vec[k]&&k<n){
        r++;
        sum[j]+=vec[k];
        k++;
    }
    mp[vec[j]]=max(mp[vec[j]],r);
}
for(ll k=0;k<n;k++){
    cout<<mp[b[k]]<<' ';
}
cout<<endl;

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