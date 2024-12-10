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
string str;
cin>>str;
int al=5;
int bl=5;
int ag=0;
int bg=0;
int c=0;
int m=0;
int i=0;
   for(i=0;i<10;i++){
    if(bl+bg<ag||al+ag<bg){if(m==0){c=i+1;m=1;}}
    if(i%2!=0){
            if(str[i]==1){ag++;al--;}
            else if(str[i]==0){al--;}
            else{if(al+ag<bl+bg){al--;}
                    else{al--;ag++;}}
    }
    if(i%2==0){
            if(str[i]==1){bg++;bl--;}
            else if(str[i]==0){bl--;}
            else{if(al+ag>bl+bg){bl--;}
                    else{bl--;bg++;}}
    }
   }
   cout<<i<<endl;



}
 return 0;
}