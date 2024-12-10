#include<bits/stdc++.h>
using namespace std;

int mahadev(){
    int n;
cin>>n;
vector<int>vec;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
sort(vec.begin(),vec.end());
if(vec[0]<0){
    cout<<vec[0]<<endl;
    return 0;
}
else{
    cout<<vec[n-1]<<endl;
    return 0;
}
}

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{

mahadev();
}

}