#include<bits/stdc++.h>
using namespace std;

void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

int n;
cin>>n;
vector<int>vec;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
int i=0;
while(vec[i+1]>=vec[i]&&i<n-1){i++;}

vector<int>bec;
for(int j=i+1;j<n;j++){
    bec.push_back(vec[j]);
}
for(int j=0;j<=i;j++){bec.push_back(vec[j]);}
sort(vec.begin(),vec.end());
if(vec==bec){cout<<n-i-1<<endl;}
else{cout<<-1<<endl;}
 return 0;
}