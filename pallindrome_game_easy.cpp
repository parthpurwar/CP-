#include<bits/stdc++.h>
using namespace std;
#define ll long long;

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
string s;
int n0=0;int n1=0;
for(int i=0;i<s.length();i++){
    if(s[i]==0){n0++;}
    else{n1++;}
}
cin>>s;

int k=s.length();
if(k%2==0){
   if(n0%4==0){
        cout<<"DRAW"<<endl;
    }
    else {
        cout<<"BOB"<<endl;
    }
}
else{
    if(s[k/2]==1){
         if(n0%4==0){
        cout<<"DRAW"<<endl;
    }
    else {
        cout<<"BOB"<<endl;
    }
    }
    else{
          if(n0%4==0){
        cout<<"DRAW"<<endl;
    }
    else {
        cout<<"ALICE"<<endl;
    }
    }
}

}
 return 0;
}