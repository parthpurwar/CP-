#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>vec,int n)
{
    int k=0;
for(int i=1;i<n;i++){
    if(vec[i]==0&&vec[i+1]==1){
        k=i;
    }
}
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
vector<int>vec;
vec.push_back(0);
for(int i=1;i<=n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
if(vec[1]==1){
    cout<<n+1<<' ';
    for(int j=1;j<=n;j++){
        cout<<j<<' ';
    }}
else if(vec[n]==0){
    for(int j=1;j<=n;j++){
        cout<<j<<' ';
    }
    cout<<n+1<<' ';
}
else if(solve(vec,n)!=0){

int r=solve(vec,n);
for(int i=1;i<=r;i++){
    cout<<i<<' ';
}
cout<<n+1<<' ';
for(int l=r+1;l<=n;l++){
    cout<<l<<' ';
}
}
else{cout<<-1;}
cout<<endl;
}
 return 0;
}