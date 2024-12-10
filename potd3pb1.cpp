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
vector<string> vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}int k=0;
int l=vec[0].length()-1;
while(l+1){
set<char> st;
for(int j=0;j<n;j++){
    st.insert(vec[j][l]);
}
k=k+st.size();
l=l-1;
}
cout<<k;
}
 return 0;
}