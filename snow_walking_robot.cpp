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
string str;
cin>>str;
int n=str.length();
int u=0;int l=0;int r=0;int d=0;
for(int i=0;i<n;i++){
if(str[i]=='U'){u++;}
else if(str[i]=='L'){l++;}
else if(str[i]=='R'){r++;}
else if(str[i]=='D'){d++;}
}


}
 return 0;
}