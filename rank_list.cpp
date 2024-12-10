#include<bits/stdc++.h>
using namespace std;

void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

int n;int k;
cin>>n>>k;
int n;int k;
cin>>n>>k;
int arr[n][2];
vector<int>vec;

for(int i=0;i<n;i++){
    cin>>arr[i][0]>>arr[i][1];
vec.push_back(arr[i][0]);
}
sort(vec.begin(),vec.end());
map<int,vector<int>>mp;
for(int j=0;j<n;j++){
    mp[arr[j][0]].push_back(arr[j][1]);
}int a=0;int v=0;int i=n-1;
while(a+mp[vec[i]].size()<k){
a+=mp[vec[i]].size();
i--;
}
int j=0;
while(a<k){
a++;j++;
}
int p=mp[vec[i]][j];
int ans=0;
for(int j=0;j<n;j++){
    if(arr[j][0]==vec[i]&&arr[j][1]==p){ans++;}
}
cout<<ans<<endl;
return 0;
}