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
ll n;ll k;ll pb;ll ps;
cin>>n;cin>>k;cin>>pb;cin>>ps;
vector<ll> per;
vector<ll> arr;
for(ll i=0;i<n;i++){
	ll a;
	cin>>a;
	per.push_back(a);
}
for(ll i=0;i<n;i++){
	ll a;
	cin>>a;
	arr.push_back(a);
}
ll ansb=0;
ll x=pb; ll s=arr[x-1];
ll anss=0;
ll y=ps;ll s2=arr[y-1];
for(ll i=1;i<=min(k;i++){
ansb=max(ansb,s+(k-i)*arr[x-1]);
x=per[x-1];s+=arr[x-1];

anss=max(anss,s2+(k-i)*arr[y-1]);
y=per[y-1];s2+=arr[y-1];
}

if(ansb>anss){cout<<"Bodya"<<endl;}
else if(ansb<anss){cout<<"Sasha"<<endl;}
else{cout<<"Draw"<<endl;}
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