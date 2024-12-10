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
ll n,l,r;
cin>>n>>l>>r;
vector<ll> inp;
for (ll i = 0; i <n; i++){
    ll k;
    cin>>k;
    inp.push_back(k);
}
inp.push_back(0);

ll s=0;ll m=0;ll a=0;
for(ll i=0;i<=n;i++){
if(s<l){s+=inp[i];}
else if(s>r){i--;s=s-inp[a];a=a+1;}
else{
    m++;
    a=i;
    s=inp[i];
}
}
cout<<m<<endl;
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