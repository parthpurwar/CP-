#include<bits/stdc++.h>
#include<iostream>
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
    
int n;int q;
cin>>n>>q;
vector <int> vec;
for (int i = 0; i < q; i++){
    int a;
    cin>>a;
    vec.push_back(a);
}
int arr[q];
cin>>s>>d>>k;
int sum;
for(int p=1;p<=k;p++){
    int j=p*vec[s-1+(p-1)*d];
    sum=sum+p;
}
cout<<sum;

}
 return 0;
}