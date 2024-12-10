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
ll n,x;
cin>>n>>x;
vector<ll> vec;
ll s=0;
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	vec.push_back(k);
	}
sort(vec.begin(),vec.end());
for(ll i=0;i<n;i++){
	s+=vec[i];
	cout<<vec[i]<<' ';
}cout<<s<<endl;
if(s%x!=0){s=(s/x)+1;}
else{s=s/x;}
cout<<max(s,vec[n-1]);
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