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
int a,b;
cin>>a>>b;
int total;
          
          if(a>b){
            swap(a,b);
          }
    if(b>=2*a){cout<<a<<endl;}
    else{cout<<(a+b)/3<<endl;}
}

 return 0;
}