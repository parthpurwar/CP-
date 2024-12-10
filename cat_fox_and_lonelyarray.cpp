#include<bits/stdc++.h>
using namespace std;
int orofj(int arr[], int j,int r,int n)
{int k;
while(j+r<n){
    for(int i=j;i<j+r;i++){
k=arr[i]^arr[i+1];
    }}
    return k;
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
int p,q,r;
while(k<=n||r<n){
    p=orofj(arr,0,k,n);
    for(int o=0;o<n;o++){
        q=orofj(arr,o,k,n);
        if(q==p){
            r++;
        }
        else{
            k++;
            r=0;
            break;

        }
    }}
    cout<<k<<endl;

    
}



 return 0;
}