#include<bits/stdc++.h>
using namespace std;

{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n;
cin>>n;
vector<int> vec;

for(int i=0;i<n;i++){
    int k=i+1;
    vec.push_back(k);
}
for(int j=0;j<n;j++){
    cout<<vec[j]<<' ';
}
cout<<endl;
}
 return 0;
}