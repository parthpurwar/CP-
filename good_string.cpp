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
string str;
cin>>str;
int k=0;
for(int i=0;i<str.size();i++){
    if(!k){
        if((i+1)%2!=0){
            if(str[i]==str[i+1]){str[i]='#';k=1;
}
        }
    }
    else if(k){
        if((i+1)%2==0){
            if(str[i]==str[i+1]){str[i]='#';k=0;}
        }
    }
}
int s= str.size();
vector<char>vec;
for(int j=0;j<s;j++){
    if(str[j]!='#'){
        vec.push_back(str[j]);
    }
}
cout<<s-vec.size()+(vec.size()%2)<<endl;
for(int k=0;k<vec.size()-(vec.size()%2);k++){
    cout<<vec[k];
}
cout<<endl;
}
 return 0;
}