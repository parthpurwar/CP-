#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
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
// ll dist(ll a,ll b,ll c,ll d){
//     ll k=pow((c-a),2);
//     ll l=pow((d-b),2);
//     ll s=sqrt(l+k);
//     return s;
// }
int mahadev()
{
ll n;
cin>>n;
ll arr[n][2];
for(ll i=0;i<n;i++){
    cin>>arr[i][0]>>arr[i][1];
}
ll xs,ys,xt,yt;
cin>>xs>>ys>>xt>>yt;
ll t=(yt-ys)*(yt-ys)+(xt-xs)*(xt-xs);
for(ll i=0;i<n;i++){
if((arr[i][1]-yt)*(arr[i][1]-yt)*1ll+(xt-arr[i][0])*(xt-arr[i][0])*1ll<=t){
    cout<<"no"<<endl;return 0;
}}
cout<<"yes"<<endl;return 0;

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