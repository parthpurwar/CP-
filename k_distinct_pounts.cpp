#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void mahadev()
{

     
}

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int x;int y;int k;
cin>>x>>y>>k;
if(k%2==0){
 for(int i=1;i<=k/2;i++){
        cout<<x-i<<' '<<y-i<<endl;
    }
     for(int i=1;i<=k/2;i++){
        cout<<x+i<<' '<<y+i<<endl;
    }
}
else{
    for(int i=1;i<=(k-1)/2;i++){
        cout<<x-i<<' '<<y-i<<endl;
    }
    cout<<x<<' '<<y<<endl;
    for(int i=1;i<=(k-1)/2;i++){
        cout<<x+i<<' '<<y+i<<endl;
    }
}}
 return 0;
}