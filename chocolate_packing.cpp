#include<bits/stdc++.h>
using namespace std;
void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;

    int a;int b;int c;
    cin>>a>>b>>c;
    int l;int w;int h;
    cin>>l>>w>>h;
    int ans;

int r=(a/l)*(b/h)*(c/w);
if(r>ans){ans=r;}

r=(a/l)*(b/w)*(c/h);
if(r>ans){ans=r;}

r=(a/h)*(b/l)*(c/w);
if(r>ans){ans=r;}

r=(a/h)*(b/w)*(c/l);
if(r>ans){ans=r;}

r=(a/w)*(b/l)*(c/h);
if(r>ans){ans=r;}

r=(a/w)*(b/h)*(c/l);
if(r>ans){ans=r;}

cout<<ans;
return 0;

}