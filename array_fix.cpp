#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define lld long double;
#define f(i,a,b) for(int i = a; i < b; i++);
#define fe(i,a,b) for(int i = a; i >= b; i--);
#define vll vector<ll>;
#define pb push_back;
#define pii pair<int, int>;
#define si set<int>;
#define sc set<char>;
#define mii map<int, int>;
#define sor(v) sort(v.begin(),v.end());
#define all(v) v.begin(),v.end();
int mahadev()
{
ll n;
cin>>n;
vector<ll> vec;
for(ll i=0;i<n;i++){
    ll q;
    cin>>q;
    vec.push_back(q);
}
ll k=vec[n-1];
for(ll i=n-2;i>=0;i--){

    if(vec[i]>k){
        if(vec[i]<10){cout<<"NO"<<endl;return 0;}
        else{
            if(vec[i]/10>vec[i]%10){cout<<"NO"<<endl;return 0;}
            if(vec[i]%10>k){cout<<"NO"<<endl;return 0;}
            k=vec[i]/10;
        }
    }
else{
    k=vec[i];
}
}


cout<<"YES"<<endl;return 0;
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