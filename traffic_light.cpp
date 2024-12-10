#include<bits/stdc++.h>
using namespace std;
#define ll long long;

void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
long long n;
cin>>n;
char c;
cin>>c;

string str;
int k=1;
int p=1;
cin>>str;
int a=0;int l=0;int lr;int fg;
if(c=='g'){cout<<0;}
else{
for(int i=0;i<n;i++){
    if(str[i]==c&&k==1){
        k=0;p=1;
        a=i;
    }
    else if(str[i]=='g'&&p==1){
        k=1;p=0;
        if(l<i-a){l=i-a;}
        
    }
}
int fg=0;int j=0;
for(fg<1){
    if(str[j]=='g'){fg++;}
}
if(l<n-a+fg){
    l=n-a+fg;
}
cout<<l<<endl;
}
}
 return 0;
}