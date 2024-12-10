#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b)
{
    int g=gcd(a,b);
    int r=(a*b)/g;
    return g;
}
int lcm_array(vector<int> vec){
    int result= vec[0];
    for(int i=0;i<vec.size();i++){
        result=lcm(result,vec[i]);
    }
    return result;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n;
vector<int> vec;
for(int i=0;i<n;i++){
    cin>>vec[i];
}
sort(vec.begin(),vec.end());
int k=1;int s=0;int j=1;int r=0;
while(k&&j){
    int q;
     r=lcm_array(vec);
    if(r==vec[vec.size()-1]){s=vec[vec.size()-1];vec.pop_back();}
    else if(r==s){vec.pop_back();}
    else{k=0;}
    j=vec.size();
}
cout<<vec.size()<<endl;
}
 return 0;
}