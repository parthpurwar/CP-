#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
ll n;ll k;
cin>>n>>k;
vector<ll>vec;
vec.push_back(0);
for(ll i=1;i<=n;i++){
    ll k;
    cin>>k;
    vec.push_back(k);
}
ll sum=vec[vec.size()-1];
vector<ll>vec2;
ll m=0;
for(ll j=vec.size()-2;j>=0;j--){
if(sum%2==0){sum=sum+vec[j];}
else if(sum%2==1){ 
m++;sum=vec[j];vec2.push_back(j+1);
}
}
if(k>m){cout<<"NO"<<endl;}
else if((m-k)%2!=0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    for(ll i=k-1;i>=0;i--){
        cout<<vec2[i]<<' ';
    }
    cout<<endl;
}
}
 return 0;
}