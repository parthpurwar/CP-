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

int arr[2][n];
int k=2*n-1;
for(int i=0;i<n-1;i=i+2){
    arr[0][i]=k;k--;
    arr[1][i+1]=k;k--;
}arr[1][n-1]=2*n;

int k=n;
for(int a=0;a<n-1;a=a+2){
    arr[1][a]=k;k--;
    arr[0][a+1]=k;k--;
}
for(int p=0;p<2;p++){
    for(int q=0;q<n;q++){
        cout<<arr[p][q]<<' ';
    }cout<<endl;
}

}

 return 0;
}