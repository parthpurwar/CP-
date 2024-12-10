#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

int a1;int a2;
cin>>a1>>a2;
int t=0;
while(a1>0&&a2>0){
5 3
1000000000 1000000000

    if(a1==1&&a2==1){cout<<t<<endl;return 1;}
    if(a1>=a2){if((a1-a2)%2==0){a2=a2+(a1-a2)/2;a1=a2;t+=};}
    else if(a2>a1){a2=a2-2;a1+=1;t++;}
    
}
cout<<t<<endl;

 return 0;
}