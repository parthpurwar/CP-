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
ll n,x,y;cin>>n>>x>>y;
ll a=0;ll b=0;
a=n/x;b=n/y;
ll lcm=(x*y)/gcd(x,y);
ll c=n/lcm;
a-=c;b-=c;
ll s=0;ll i=n;
ll k=b*(b+1);k=k/2;
ll l=a*(a-1);l=l/2;
ll d=n-a+1;
s+=(d*a);
s+=l;
s-=k;
cout<<s<<endl;
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