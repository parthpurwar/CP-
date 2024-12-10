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
int n;int k;
cin>>n>>k;
vector<int>vec;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
vector<int> arr;
arr=vec;
sort(arr.begin(),arr.end());
map<int,int> mp;
for(int i=0;i<n-1;i++){
    mp[arr[i]]=arr[i+1];
}
int v=0;
for(int j=0;j<n-1;j++){
    if(mp[vec[j]]!=vec[j+1]){v++;}
}
if(v>k){cout<<"NO"<<endl;}
else{cout<<"YES"<<endl;}
}
 return 0;
}