#include<bits/stdc++.h>
using namespace std;

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
    cin>>k;
int a=0;
int b=0;
int d=0;
int s=arr[0];
while(b!=n||s>k){
if(s<k&&b<n){
    b++;s=s+arr[b];
}
if(s>k){
    s=s-arr[a];a++;
}
if(s==k){
        d=max(d,b-a+1);
        b++;s=s+arr[b];
}}
cout<<d;
}
 return 0;
}