#include<bits/stdc++.h>
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
int n;
cin>>n;
vector<int>vec;
int s=0;

for(int i=0;i<n;i++){
    int k;
    cin>>k;
    cout<<k<<endl;
    s+=k;
    cout<<s<<endl;
    vec.push_back(k);
}
cout<<vec.size()<<endl;
  if(s>=vec.size()){
        cout<<s-vec.size()<<endl;
    }
    else{
cout<<1<<endl;
}}
 return 0;
}