#include<bits/stdc++.h>
using namespace std;

int sum(int k,int x)
{
int r=k*(k+1)/2;
return r*x;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n;
cin>>n;
int x=0;
int k=0;
int s=0;
for(int i=2;i<=n;i++){
int k=n/i;
if(sum(k,i)>s){
    s=sum(k,i);
    x=i;
}
}
cout<<x<<endl;
}
 return 0;
}