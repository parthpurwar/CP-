#include<bits/stdc++.h>
using namespace std;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
vector<int>vec;
int a;int b;int c;
cin>>a;cin>>b;cin>>c;
vec.push_back(a);vec.push_back(b);vec.push_back(c);
for(int i=0;i<5;i++){
sort(vec.begin(),vec.end());
vec[0]++;
}
cout<<vec[0]*vec[1]*vec[2];
}
 return 0;
}