#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
ll n ;
cin>>n;
vector<ll>vec;
set<int>st;
for(ll i=0;i<n;i++){
    ll k ;
    cin>>k;
    if(k%2==0){
        st.insert(k);
            vec.push_back(k);
    }
}
int res=0;
while(!st.empty()){
    int m=*st.rbegin();
    if(m%2==0){
        st.erase(m);
        st.insert(m/2);
        res++;
    }
    else{
        st.erase(m);
    }
}
cout<<res<<endl;
}
 return 0;
}