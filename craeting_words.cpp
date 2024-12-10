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
string a;
string b;
cin>>a>>b;
char k= a[0];
a[0]=b[0];
b[0]=k;
cout<<a<<' '<<b;
}
 return 0;
}