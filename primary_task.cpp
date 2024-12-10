#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define lld long double;
#define f(i,a,b) for(int i = a; i < b; i++);

#define si set<int>;
#define sc set<char>;
#define mii map<int, int>;
#define sor(v) sort(v.begin(),v.end());
#define all(v) v.begin(),v.end();
int mahadev()
{
ll n;
cin>>n;
string s;
cin>>s;
ll k=0;
for(ll i=0;i<n;i++){
    if(s[i]=='0'){
        k--;
    }
    else{
        k++;
}
}
if(k!=0){
    cout<<-1<<endl;
    return 0;
}

deque<ll> dq;
vector<ll> vec;
for(ll i=0;i<n;i++){
    dq.push_back(s[i]);
}
ll x=0;
while(!dq.empty()){

    if(dq[0]!=dq[dq.size()-1]){
        dq.pop_back();
        dq.pop_front();
        x++;
    }
    else{
        if(dq[0]==1){
            vec.push_back(x);
            dq.push_front(0);
            dq.push_front(1);
        }
        else if(dq[0]==0){
            vec.push_back(dq.size()+x-1);
            dq.push_back(0);
            dq.push_back(1);
        }
    }
}
cout<<vec.size()<<endl;
for(ll a=0;a<vec.size();a++){
    cout<<vec[a]<<' ';
}
cout<<endl;
return 0;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
mahadev();
}
 return 0;
}