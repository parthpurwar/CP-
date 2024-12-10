#include<bits/stdc++.h>
using namespace std;

bool solve(string str, int n)
{
 vector<pair<int,int>>vec;
 int i=0;
 int k=0;
 while(i!=n){
    if(str[i]=='M'&&str[i-1]=='T'){
        k=1;
        pair<int, int> pr;
        pr.first=i;
        pr.second++;
    }
    while(str[i]=='M'&&str[i+1]!='T'){pr.second++;}
 }
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
int i=0;
while(i!=n){
    if(str[i]=='T'&&str[i+1]=='M'&&str[i+2]=='T'){
        i=i+3;
        str[i]='P';
        str[i+1]='P';
        str[i+2]='P';
    }
    else{i++;}
}
vector<char>vec;
for(int j=0;j<n;j++){
    if(str[j]!='P'){
        vec.push_back(str[j]);
    }
}



}
 return 0;
}