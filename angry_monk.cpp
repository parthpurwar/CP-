#include<bits/stdc++.h>
using namespace std;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n;int k;
cin>>n>>k;
vector<int>vec;
for(int i=0;i<k;i++){
int k;
cin>>k;
vec.push_back(k);
}
sort(vec.begin(),vec.end());
int a;
for(int j=1;j<n;j++){
    a=a+vec[j]+vec[j]-1;
}
cout<<a<<endl;
}
 return 0;
}