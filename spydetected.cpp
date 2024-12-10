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
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(arr[0]!=arr[1]&&arr[0]!=arr[2]){
    cout<<arr[0];
}
else if(arr[1]!=arr[0]&&arr[1]!=arr[2]){
    cout<<arr[1];
}
else{
int m;
while(arr[m]!=arr[0]){
    m++;
}
cout<<arr[m];
}}
 return 0;
}