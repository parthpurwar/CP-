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
string str;
cin>>str;
str+='#';
int c=1;
set<char>st;
if(str.length()==1){cout<<str[0]<<endl;}
for(int i=1;i<str.length();i++){
    if(str[i]==str[i-1]){c++;}
    else if(str[i]!=str[i-1]){
        if(c%2!=0){
            st.insert(str[i-1]);
        }
       
        c=1;
    }
  
    }
    

for(auto it=st.begin();it!=st.end();it++){
   cout<<*it;

}
    cout<<endl;
}
 return 0;
}