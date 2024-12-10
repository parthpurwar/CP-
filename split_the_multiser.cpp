#include<bits/stdc++.h>
using namespace std;

int mahadev()
{
int n;
int k;
cin>>n>>k;
if(n==1){cout<<0<<endl;
return 0;}
else{
    if(k==2){cout<<n-1<<endl;return 0;}
    else if(n%(k-1)<=1){cout<<n/(k-1)<<endl;return 0;}
    else{cout<<n/(k-1)+1<<endl;return 0;}
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