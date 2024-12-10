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
int x,y;
cin>>x>>y;
int cells;
int count;
if(y%2==0){
    count=y/2;
}
else{count=(y/2)+1;}
cells=(15*count)-(4*y);
while(x!=0){
if(cells==0){
    count=count+1;
    cells=cells+15;
}
x--;
cells--;
}
cout<<count<<endl;

}
 return 0;
}