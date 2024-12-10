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
int arr[n][3];
int l=INT_MAX;int h=0;

for(int i=0;i<n;i++){
    arr[i][0]=i+1;
    cin>>arr[i][1]>>arr[i][2];
    if(arr[i][1]<l){l=arr[i][1];}
    if(arr[i][2]>h){h=arr[i][2];}
}
int ans=-1;
for(int i=0;i<n;i++){
if(arr[i][1]==l&&arr[i][2]==h){
    ans=arr[i][0];
}
}
cout<<ans<<endl;

}
 return 0;
}