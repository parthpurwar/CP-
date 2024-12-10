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
int n;
cin>>n;
string str;
cin>>str;
int a=0;int b=0;int c=0;int d=0;
for(int i=0;i<4*n;i++){
    if(str[i]=='A'&&a<n){a++;}
    else if(str[i]=='B'&&b<n){b++;}
    else if(str[i]=='C'&&c<n){c++;}
    else if(str[i]=='D'&&d<n){d++;}
}
cout<<a+b+c+d<<endl;
}
 return 0;
}