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
	ll k;
	cin>>k;
	if(i%2==1){
		k*=(-1);
	}
	vec.push_back(k);
}
vector<ll> sum;
ll s=0;
map<ll,ll> mp;
mp[0]++;
for(ll i=0;i<n;i++){
s+=vec[i];
mp[s]++;
if(mp[s]>1){cout<<"YES"<<endl;return 0;}
}
cout<<"NO"<<endl;return 0;
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