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
vector<int> vec;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
int k=0;
for(int i=0;i<n-1;i++){
    if(vec[i]>k){
        k=vec[i];
    }
}
cout<<k+vec[n-1]<<endl;

}
 return 0;
}