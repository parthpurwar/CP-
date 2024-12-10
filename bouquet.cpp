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
ll n;
ll m;
cin>>n>>m;
vector<ll>vec;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
sort(vec.begin(),vec.end());
ll p=vec[0];ll c=m-vec[0];ll pc=0;
ll a=0;ll b=0;
ll i=1;int k=0;
vec[n]=0;
if(m<vec[0]){
    cout<<0<<endl;
}
else{
while(i<n+1){
    
    if(vec[i]==vec[a]){
            if(c>vec[i])
                {c=c-vec[i];
                p=p+vec[i];}
  if(i==n-1){pc=max(pc,p);}
                i++;

    }
    else if(vec[i]-vec[a]==1){
            if(k==0){b=i;k=1;}
            if(c>vec[i])
                {c=c-vec[i];
                p=p+vec[i];}
                if(i==n-1){pc=max(pc,p);}
                i++;

    }
    else{       a=b;k=0;
                c=m-vec[a];
                pc=max(pc,p);
                b=i;
                i=a+1;
                p=vec[a];
                }

}
cout<<pc<<endl;
}}
 return 0;
}