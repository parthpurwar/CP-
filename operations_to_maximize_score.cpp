#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mahadev()
{
ll n;ll k;
cin>>n>>k;
vector<ll>a;
vector<ll>vec;
a.push_back(0);
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    vec.push_back(k);
    a.push_back(k);
}
vector<ll>b;
b.push_back(0);
for(ll j=0;j<n;j++){
    ll k;
    cin>>k;
    b.push_back(k);
}
sort(vec.begin(),vec.end());
bool check=true;
ll i=n;
while(check){
if(b[i]==0){i--;}
else{
check=false;

}
}
if(i>n/2){
    ll ans=a[i]+k+a[n/2];
    cout<<ans<<endl;
    return 0;
}
else{
ll ans = a[i]+k+a[(n/2)+1];
cout<<ans<<endl;
return 0;
}
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