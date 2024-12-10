#include<bits/stdc++.h>
using namespace std;

void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int x;int y;
cin>>x>>y;
if(y<x){cout<<"YES"<<endl;}
else if(x==y){cout<<"YES"<<endl;}
else if(x==1){cout<<"NO"<<endl;}
else if(x==2&&y>3){cout<<"NO"<<endl;}
else if(x==3){cout<<"NO"<<endl;}
else{cout<<"YES"<<endl;}
}
 return 0;
}