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
int a;int b;int c;
cin>>n;
cin>>a>>b>>c;
string str;
cin>>str;
int r=0;int p=0;int s=0;
for(int i=0;i<n;i++){
    if(str[i]=='R'){r++;}
     if(str[i]=='P'){p++;}
      if(str[i]=='S'){s++;}
}
int w=0;
w=min(a,s)+min(b,r)+min(c,p);
if(w>=(n+1)/2){cout<<"YES"<<endl;
char arr[n];
for(int i=0;i<n;i++){
    if(str[i]=='R'){
        if(b>0){arr[i]='P';b--;}
        else {arr[i]='#';}
    }
     if(str[i]=='P'){
        if(c>0){arr[i]='S';c--;}
        else {arr[i]='#';}
    }
     if(str[i]=='S'){
        if(a>0){arr[i]='R';a--;}
        else {arr[i]='#';}
    }
}

for(int j=0;j<n;j++){
    if(arr[j]=='#'){
        if(a>0){arr[j]='R';a--;}
        else if(b>0){arr[j]='P';b--;}
        else if(c>0){arr[j]='S';c--;}
    }
}
for(int k=0;k<n;k++){
    cout<<arr[k]<<' ';
}
cout<<endl;
}
else{cout<<"NO"<<endl;}
}
 return 0;
}