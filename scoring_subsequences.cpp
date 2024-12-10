#include<bits/stdc++.h>
using namespace std;

int cost(vector<int>vec,int a, vector<int>rem){
    if(a<vec.size()-rem.size()){return vec.size();}
    
  else{return vec.size()-rem.size()+1;}
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
    int c;
    cin>>c;
    vec.push_back(c);
}vector<int>rem;
vector<int>vc;
for(int i=0;i<n;i++){
vc.push_back(vec[i]);
if(vec[i]<vc.size()){rem.push_back(vec[i]);}
int k= cost(vc,vec[i],rem);
cout<<k<<' ';
}
cout<<endl;
}
 return 0;
}