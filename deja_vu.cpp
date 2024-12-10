#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int mahadev()
{
int n;int q;
cin>>n>>q;
vector<int>a;
vector<int>x;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    a.push_back(k);
}
map<int, int>mp;
for(int i=0;i<q;i++){
    int k;
    cin>>k;
    x.push_back(k);
}
sort(x.begin(),x.end());
for(int i=0;i<n;i++){
    if(a[i]%2==0){
    int k=log2(a[i]);
int l=0;int h=q-1;int m=(l+h)/2;
while(h>l){
if(x[m]>k){h=m;m=(l+h)/2;}
else if(x[m]<k){l=m;m=(l+h)/2;}
else{
    h=l-1;
}}
for(int j=0;j<=m;j++){
    a[i]+=pow(2,x[j]-1);
}
}
}
for(int i=0;i<n;i++){
    cout<<a[i]<<' ';
}
cout<<endl;
return 0;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
mahadev();
}
 return 0;
}