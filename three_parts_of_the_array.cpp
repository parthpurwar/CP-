#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

ll n;
cin>>n;
vector<ll>vec;
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    vec.push_back(k);
}
ll a=0;ll b=n-1;
ll s=0;
ll s1=vec[0];ll s2=vec[n-1];
while(b>a){
if(s1>s2){b--;s2+=vec[b];}
else if(s2>s1){a++;s1+=vec[a];}
else{s=s1;a++;s1+=vec[a];}
}
cout<<s<<endl;

 return 0;
}