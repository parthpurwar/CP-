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
vector<int> vec;
int c1=0;
int c2=0;
int f=0;int l=0;int t=0;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
    if(k==2){c2++;
    l=i;
if(t==0){f=i;t=1;}
    }
    if(k==1){c1++;}
}
if(c2<3||c1>1){cout<<"NO";}
else{
    cout<<"YES"<<endl;
   
      for(int i=0;i<n;i++){
          if(vec[i]==1){
              for(int j=0;j<n;j++){
                  if(i==j){cout<<'*';}
                  else if(vec[j]==1){cout<<'=';}
                  else{cout<<'-';}
              }
          }

          else{
              if(i==f){
                for(int j=0;j<n;j++){
                    if(i==j){cout<<'*';}
                    else if(j==l){cout<<'+';}
                    else {cout<<'-';}
                }
              }
              else{
                
              }
          }
  }
}


}
 return 0;
}