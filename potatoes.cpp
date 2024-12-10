#include<bits/stdc++.h>
using namespace std;

void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

int y;int n;int k;
cin>>y>>k>>n;
if(n<k||y>=n){cout<<-1;return 0;}
int r=n%k;
vector<int>vec;
int t=n-r;
while(t>y){
vec.push_back(t-y);
t=t-k;
}
sort(vec.begin(),vec.end());
for(int j=0;j<vec.size();j++){
    cout<<vec[j]<<endl;
}
 return 0;
}