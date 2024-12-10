#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



int mahadev()
{
int n;
cin>>n;
string str;
cin>>str;
set<string> ans;
    ans.insert(str);
string str2;
while(str.size()>1){
    str.erase(1,1);
    ans.insert(str);
}
while(str2.size()){
ans.insert(str2);
    str.erase(0,1);
}

for(auto it=ans.begin();it!=ans.end();it++){
    cout<<*it<<endl;
}
return 0;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
mahadev();
}
 return 0;
}