#include<bits/stdc++.h>
using namespace std;

int mahadev()
{
int n;
cin>>n;
vector<int>vec;
vector<int>b;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
// if(vec[0]==1){
// sort(b.begin(),b.end(),greater<int>());
// }
// else{
// sort(b.begin(),b.end());}
// for(int i=0;i<n;i++){
//     cout<<b[i]<<' ';
    
// }
// cout<<endl;
for(int i=1;i<n;i++)
{
    b.push_back(vec[i]);
}
b.push_back(vec[0]);
for(int i:b)
{
    cout<<i<<" ";
}
cout<<"\n";

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