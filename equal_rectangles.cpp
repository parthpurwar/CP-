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
set<int>st;
for(int i=0;i<4*n;i++){
int k;
cin>>k;
vec.push_back(k);
st.insert(k);
}
sort(vec.begin(),vec.end());
int i=0;int j=4*n-1;
int p=vec[0]*vec[4*n-1];
int k=1;
while(j>i){
    int r=0;
    if(r==0){
        if(vec[j]*vec[i]!=p){k=0;break;}
        else{j--;i++;r=1;}
    }
    else{
        if(vec[i]!=vec[i-1]||vec[j]!=vec[j+1]||vec[i]*vec[j]!=p){k=0;break;}
        else{j--;i++;r=0;}
    }

}
if(k==0){cout<<"NO"<<endl;}
else{cout<<"YES"<<endl;}

}
 return 0;
}