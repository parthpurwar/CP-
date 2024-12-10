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
vector<ll> p;
ll a=0;
for(ll i=0;i<n;i++){
	ll k;
	cin>>k;
	vec.push_back(k);
}
for(ll i=0;i<n-1;i++){
	for(ll j=i+1;j<n;j++){
		if(vec[j]!=vec[i]){
			p.push_back(j+1);
			break;
		}
	}
}
// for(ll i=0;i<p.size();i++){
// 	cout<<p[i]<<' ';
// }
// cout<<endl;
ll q;
cin>>q;
ll arr[q][2];

for(ll i=0;i<q;i++){
	cin>>arr[i][0]>>arr[i][1];
}
for(ll i=0;i<q;i++){
	if(arr[i][1]>=p[arr[i][0]-1]&&p[arr[i][0]-1]!=0){
		cout<<arr[i][0]<<' '<<p[arr[i][0]-1]<<endl;
	}
	else{
		cout<<-1<<' '<<-1<<endl;
	}
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