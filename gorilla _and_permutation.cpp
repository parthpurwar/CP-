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
int n;int m;int k;
cin>>n>>m>>k;
for(int i=n;i>=k;i++){
    cout<<i<<' ';
}
for(int j=m+1;j<k;j++){
    cout<<j<<' ';
}
for(int a=1;a<m;a++){
    cout<<a<<' ';
}
}
 return 0;
}