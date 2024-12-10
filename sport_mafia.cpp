#include<bits/stdc++.h>
using namespace std;

void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

int n,k;
cin>>n>>k;
int a=0;
int r=1;
int s=0;
while(n--){
if(s<k){s=s+r;r++;}
else{s=s-1;a++;}
n++;
}
cout<<a<<endl;

 return 0;
}