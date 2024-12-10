#include<bits/stdc++.h>
using namespace std;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n;int l;int r;
cin>>n>>l>>r;
vector<int>vec;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
int a=0;
sort(vec.begin(),vec.end());
int i=n-2;int j=n-1;
int m=0;
while(j>0){
    
int f=j-1;
int b=0;
int sa=vec[f]+vec[j];
int sb=vec[b]+vec[j];
while(sa>r&&f>b){f--;sa=vec[f]+vec[j];}
while(sb<l&&f>b){b++;sb=vec[b]+vec[j];}
if(f==b&&(vec[f]+vec[b]>r||vec[f]+vec[b]<r)){a--;}
a=a+f-b+1;
j--;
}
cout<<a<<endl;
}
 return 0;
}