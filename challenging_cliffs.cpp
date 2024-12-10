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
vector<int>arr;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    arr.push_back(k);
}
sort(arr.begin(),arr.end());
int l=1;int h=0;
int d=arr[1]-arr[0];
for(int a=0;a<n-1;a++){
if(arr[a+1]-arr[a]<d){h=a+1;l=a;d=arr[a-1]-arr[a];}
}

 if(n==4&&l==1&&h==2){
cout<<arr[1]<<' '<<arr[3]<<' '<<arr[0]<<' '<<arr[2];
}
else{
        cout<<arr[l]<<' ';
for(int x=0;x<n;x++){
    if(x!=l&&x!=h){cout<<arr[x]<<' ';}
}cout<<arr[h];
}



cout<<endl;}

 return 0;
}