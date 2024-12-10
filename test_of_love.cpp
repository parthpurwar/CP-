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
string str;
cin>>str;
int i=0;
while(i<n){
if(str[i]=='W'&&k>0){k--;}
else if(str[i]=='L'){m--;}
}
}
 return 0;
}