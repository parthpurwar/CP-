#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n,k;
cin>>n>>k;
if(k<n){
    int t=n/k;
  if(k*t<n){
      t=t+1;
  }
  k=k*t;
}
int e;

     if(k%n!=0){
    e=(k/n)+1;
    cout<<e<<endl;}
else{e=k/n;
cout<<e<<endl;}


    
}



 return 0;
}