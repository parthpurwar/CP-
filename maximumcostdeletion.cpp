#include<bits/stdc++.h>
using namespace std;
int groups(char arr[],int n){
    int g=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            g++;
        }
    }
return g;

}



int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n,a,b;
cin>>n>>a>>b;
char arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(b>=0){
    int k=a+b;
    cout<<n*k;
}
else{
int p=groups(arr,n);
cout<<(n*a)+(g/2+1)*b;
}
}
 return 0;
}