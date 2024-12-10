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
vector<int> vec;
for(int i=0;i<n;i++){
    int k;cin>>k;
    vec.push_back(k);
}
int q;
cin>>q;
int lr[q][2];
for(int i=0;i<q;i++){
    cin>>lr[i][0];
    cin>>lr[i][1];
}
int k=0;
while(k!=q){
    int a=abs(vec[lr[k][0]-1]-vec[lr[k][1]-1]);
    for(int i=(lr[k][0]-1);i<(lr[k][1]-1);i++){
        for(int j=i+1;j<=(lr[k][1]-1);j++){
            if(abs(vec[j]-vec[i])<a){a=abs(vec[j]-vec[i]);}
        }
    }
    cout<<a<<endl;
    k++;

}
 return 0;
}