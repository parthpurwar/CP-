#include<bits/stdc++.h>
using namespace std;

bool solve(long long n)
{
long long k=n;
int d=0;
while(k){
    d=k%10;
    k=k/10;
    if(n%d!=0){return true;}
}
return false;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
long long n;
cin>>n;
while(solve(n)){
n++;}
cout<<n;
}
 return 0;
}