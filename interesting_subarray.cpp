#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n;
cin>>n;
vector<int>vec;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
bool check =true;
for(int i=0;i<n-1;i++){
    if(abs(vec[i+1]-vec[i])>1){cout<<"YES"<<endl;
    cout<<i+1<<' '<<i+2<<endl;
    check=false;}
}
if(!check){cout<<"NO"<<endl;}
}
 return 0;
}