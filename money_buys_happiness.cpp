#include<bits/stdc++.h>
using namespace std;

#define sor(v) sort(v.begin(),v.end());
#define all(v) v.begin(),v.end();

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int m;int x;
cin>>m>>x;
int c[m];
int h[m];
for(int i=0;i<m;i++){
    cin>>c[i];
    cin>>h[i];
}int k=1;
int s;
s=x;
int ans=0;
if(c[0]==0){ans=ans+h[0];}
while(k!=m){
if(c[k]<=s){
    s=s-c[k];
    ans=ans+h[k];
}
s=s+x;
k++;}
cout<<ans<<endl;

}
 return 0;
}