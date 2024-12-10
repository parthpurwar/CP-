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
set<int> st;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    st.insert(k);
}
int s=0;
int r=0;
for(auto it=st.begin();it++!=st.end();it++){
    int a=*it++;
    auto k=it--;
    int b=*k;
    if(a==b+1){r++;}
    else{if(r>s){s=r;}r=0;}
}
cout<<s+1;

 return 0;
}