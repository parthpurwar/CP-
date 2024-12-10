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
int k,n,m;
cin>>k>>n>>m;
vector<int>an;
vector<int>bm;
for(int i=0;i<n;i++){
    int a;cin>>a;
    an.push_back(a);
}
for(int i=0;i<m;i++){
    int b;cin>>b;
    bm.push_back(b);
}
int x=0;int y=0;
int w=n+m;
vector<int>op;
int p=0;
while(x<n||y<m){
if(min(an[x],bm[y])>k){p=-1;x=n;}
else{

 if(an[x]==0&&x<n){op.push_back(0);x++;k++;}
else if(bm[y]==0&&y<m){op.push_back(0);y++;k++;}
else if(x==n){op.push_back(bm[y]);y++;}
else if(y==m){op.push_back(an[x]);x++;}
else if(an[x]>=bm[y]){op.push_back(bm[y]);y++;}
else if(an[x]<bm[y]){op.push_back(an[x]);x++;}

}



}

if(p==-1){cout<<-1<<endl;}
else{
for(int u=0;u<(n+m);u++){
    cout<<op[u]<<' ';
}
cout<<endl;

}
}
 return 0;
}