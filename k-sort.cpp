#include<bits/stdc++.h>
using namespace std;

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
    int k;
    cin>>k;
    vec.push_back(k);
    }

vector<int> diff;
int j=1;
while(j<n){
    if(vec[j]<vec[j-1]){
        int s=j-1;
        while(vec[j]<vec[s]&&j<n){
            int r=vec[s]-vec[j];
            diff.push_back(r);
            j++;
        }
        
    }
    else{j++;}
}
if(diff.empty()){
    cout<<0;
}
else{
sort(diff.begin(),diff.end());
int ans=diff[0]*(diff.size()+1);
for(int l=1;l<diff.size();l++){
int v=diff[l]-diff[l-1];
int x=diff.size()-l;
int q=x*v;
ans=ans+q;
}
cout<<ans;
}
}  
 return 0;
}