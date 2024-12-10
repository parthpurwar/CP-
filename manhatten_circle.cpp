#include<bits/stdc++.h>
using namespace std;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int m,n;
cin>>n>>m;
char arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
int a=0;int b=0;
while(arr[a][b]!='#'){
    if(b==m-1){a++;b=0;}
    else{
    b++;}
}
int x=0;int y=0;
while(arr[x][y]!='#'){
    if(x==n-1){y++;x=0;}
    else{
    x++;}
}
cout<<x+1<<' '<<b+1<<endl;

}
 return 0;
}