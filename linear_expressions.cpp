#include<bits/stdc++.h>
using namespace std;

void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;

int a;int b;int k;
cin>>a;cin>>b;cin>>k;
int x=1;
while(x<k){
    int r=a*x;
    cout<<r+b<<' ';
    x++;
}

 return 0;
}