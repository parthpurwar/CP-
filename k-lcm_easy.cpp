#include<bits/stdc++.h>
using namespace std;

bool lcm2(int a , int b  )
{
int i=a;
int r=0;
while(i<=a*b&&r==0){
    if(i%a==0&&i%b==0){return true;}
}
return false;
}
bool lcm3(int a, int b,int c){
    if
}

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n;int k;
cin>>n>>k;
if(n%3==0){
    cout<<n%3<<' '<<n%3<<' '<<n%3;
}
else{
int i=1;
int r=0;
while(i<n/2&&r==0){

    if (lcm(max(i,n-2*i),min(i,n-2*i))<n/2){cout<<i<<' '<<i<<' '<<n-2*i;r=1;}
}
int a=0;int b=n/2;
while(b<a){

}
}
}
 return 0;
}