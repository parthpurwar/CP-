#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n;
cin>>n;
vector<ll>vec;
vec.push_back(0);
for(int i=1;i<=n;i++){
    ll k;
    cin>>k; 
    vec.push_back(k);
}
ll a=0;

for(int i=1;i<n;i++){
for(int j=vec[i]-i;j<=n;j=j+vec[i]){
    if(j>0){
    if(j>i&&vec[i]*vec[j]==i+j){
        a++;
    }}
    
}

}
cout<<a<<endl;
}
 return 0;
}