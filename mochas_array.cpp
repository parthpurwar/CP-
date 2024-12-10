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
    vector <int> vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    int a=vec[0];
    int r=1;
    int b=vec[1];;
    int l=0;
    int i=0;
while(l!=1){
    if(vec[i]%a!=0){
        b=vec[i];l=1;
    }
    i++;
}
while(i!=n){
    if(vec[i]%a!=0&&vec[i]%b!=0){
        cout<<"NO";r=0;
    }
}
    if(r==1){
        cout<<"YES"<<endl;
    }
}
 return 0;
}