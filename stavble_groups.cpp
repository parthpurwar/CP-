#include<bits/stdc++.h>
using namespace std;

void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

int n;int k;int x;
cin>>n>>k>>x;
vector<int>vec;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    vec.push_back(a);
}
sort(vec.begin(),vec.end());

vector<int> arr;
arr=vec;
vector<int>diff;
sort(arr.begin(),arr.end());
for(int i=0;i<n;i++){
    if(arr[i+1]-arr[i]>x){
        diff.push_back((arr[i+1]-arr[i]-1)/x);
    }
}
diff.push_back(0);
sort(diff.begin(),diff.end());
int a=diff.size();
int j=0;
while(k>=diff[j]&&j<=a){
    if(k>=diff[j]){k=k-diff[j];}j++;
}
cout<<a-j+1;

 return 0;
}