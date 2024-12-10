#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b){
    int k=a;
    a=b;
    b=k;

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
int k=arr[0];
for (int i = 0; i < n - 1; i++) {
     if(arr[i]<k){
        k=arr[i];
     }}


for(int a=0;a<=n/2;a++){
            if(arr[a]!=k){
            cout<<arr[a]<<' '<<k<<endl;
            }
    
}

}
 return 0;
}



