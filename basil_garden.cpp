#include<bits/stdc++.h>
using namespace std;

bool height(vector<int>vec, int n)
{
for(int i=0;i<n;i++){
    if(vec[i]!=0){
        return true;
    }
}
return false;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n;
cin>>n;
vector<int>vec;
for(int i=0;i<n;i++){
    int h;
    cin>>h;
    vec.push_back(h);
}
int x=0;
for(int i=0;i<n;i++){
    x=max(x,vec[i]);
}
cout<<x<<endl;
}
 return 0;
}