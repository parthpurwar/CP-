#include<bits/stdc++.h>
using namespace std;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n;
cin>>n;
vector <int> t(n);
for(int i=0;i<n;i++){
    cin>>t[i];
}
sort(t.begin(),t.end());
int sum=0;
for(int j=0;j<n-1;j++){
    sum=sum+t[j];
}
int time;
if(t[n-1]>sum){
    time=2*t[n-1];
    cout<<time;
}
else{
    time=sum+t[n-1];
    cout<<time;
}

}
 return 0;
}