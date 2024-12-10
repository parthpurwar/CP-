#include<bits/stdc++.h>
using namespace std;

void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

int n;
cin>>n;
vector<int>vec;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
sort(vec.begin(),vec.end());

int i=0;int j=0;int r=0;int ans=0;
for(int a=0;a<n;a++){
if(vec[a]-vec[j]<=5){r++;}
else{
    j=a;ans=max(r,ans);r=1;
}
}
cout<<max(r,ans)<<endl;
 return 0;
}