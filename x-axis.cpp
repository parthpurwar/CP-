#include<bits/stdc++.h>
using namespace std;

void swap(int a, int b)
{
int k=a;
a=b;
b=k;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
vector<int>vec;
for(int i=0;i<3;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
sort(vec.begin(),vec.end());
if(vec[0]==vec[1]){
    cout<<vec[2]-vec[0];
}
else if(vec[1]==vec[2]){
    cout<<vec[1]-vec[0];
}
else{
    cout<<vec[2]-vec[0];
}

}
return 0;
}