#include<bits/stdc++.h>
using namespace std;

bool check(pair<int,int> p1, pair<int,int > p2,int d)
{
        if(abs(p1.first-p2.first)+abs(p1.second-p2.second)==d){
            return true;
        }
        else{return false;}(
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n,d;
cin>>n>>d;
vector <pair<int,int>> vp;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    vp[i].first=x;
    int y;
    cin>>y;
    vp[i].second=y;
}
vector<pair<int, int>> vec;
int k=0;
int i=0;
int j=1;
while(k!=3||){
    if(j==n-1){
        i++;j=i+1;vec.clear();
    }
 if(check(vec[i],vec[j],d)){
    
 }   
}
}

 return 0;
}