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
ll n,k;
cin>>n>>k;

vector<ll> vec;
vec.push_back(0);
for(ll i=1;i<=n;i++){
    ll a;
    cin>>a;
    vec.push_back(a);
}
ll c=0;
ll f=0;ll s=0;ll i=1;
while(i<=n&&s==0){
if(vec[i]>vec[k]){
    if(i<k){c++;}
if(f==0){f=i;}
else{s=i;}
}
i++;
}
cout<<vec[k]<<' '<<c<<' '<<f<<' '<<s<<endl;
if(c==0&&f==0){
    cout<<n-1<<endl;
}
else if(c==0){
    cout<<f-2<<endl;
}
else if(c==1){
    if(f==0){cout<<max(f-2,k-f-1)<<endl;}
cout<<max(f-2,k-f)<<endl;
}
else{
    cout<<max(f-2,s-f)<<endl;
}
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