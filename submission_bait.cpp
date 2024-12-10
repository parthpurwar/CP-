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
vector<int>vec;

int m=0;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
   
}
sort(vec.begin(),vec.end());
int a= vec[n-1];
int i=n-1;

int  m= count(vec.begin(),vec.end(),a);
if(m%2==0){cout<<"NO"<<endl;}
else{cout<<"YES"<<endl;}
}
 return 0;
}