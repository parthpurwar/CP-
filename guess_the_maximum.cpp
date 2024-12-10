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
int k;
for(int j=0;j<n-1;j++){
if(k<max(arr[j],arr[j+1])){k=max(arr[j],arr[j+1]-1);}
cout<<k;
}
}
 return 0;
}