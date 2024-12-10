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
int x;
int y;
cin>>n>>x>>y;
int arr[n];
arr[0]=0;
for(int i=y;i<=x;i++){
    arr[i]=1;
}
int e=-1;
for(int i=y-1;i>=0;i--){
    arr[i]=e;
    e*=-1;
}
int a=-1;
for(int i=x+1;i<n;i++){
    arr[i]=a;
    a*=-1;
}
for(int j=0;j<n;j++){
    cout<<arr[j]<<' ';
}
cout<<endl;
}
 return 0;
}