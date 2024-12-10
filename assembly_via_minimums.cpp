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
ll k=(n*(n-1))/2;
vector<ll> vec;
for(ll i=0;i<k;i++){
    ll b;
    cin>>b;
    vec.push_back(b);
}
sort(vec.begin(),vec.end());
map<ll,ll>mp;
ll c=0;ll a=n;
for(ll i=0;i<k;i+=a){
cout<<vec[i]<<' ';
a--;
}
cout<<vec[k-1]<<endl;
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