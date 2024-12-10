#include<bits/stdc++.h>
using namespace std;

void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int n;
cin>>n;
int arr[n][2];
for(int i=0;i<n;i++){
    cin>>arr[i][0]>>arr[i][1];
}
for(int j=0;j<n;j++){
    if(arr[j][1]<-1){cout<<"NO"<<endl;}
    else if(arr[j][1]==-1){cout<<"YES"<<endl;}
}
 return 0;
}