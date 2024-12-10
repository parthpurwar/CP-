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
int arr[n][2];
for(int i=0;i<n;i++){
    cin>>arr[i][0]>>arr[i][1];
}
set<int> x;
set<int> y;
for(int i=0;i<n;i++){
    x.insert(arr[i][0]);
}
for(int i=0;i<n;i++){
    y.insert(arr[i][1]);
}
if(x.size()<n||y.size()<n){
    cout<<0<<endl;
}
else{cout<<1<<endl;}
}
 return 0;
}