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
ll arr[n][2];
for(ll i=0;i<n;i++){
	cin>>arr[i][0]>>arr[i][1];
}
// vector<ll> num;
map<ll,ll> mp;
for(ll i=0;i<n;i++){
	if(arr[i][0]==1){
		ll a=1<<arr[i][1];
		cout<<a<<' ';
		// num.push_back(a);
		mp[a]++;
	}
}
for(ll j=1;j<31;j++){
	if(mp[j]%2==0&&mp[j]>2){
		mp[j+1]+=(mp[j]-2)/2;
		mp[j]-=(mp[j]-2)/2;
	}
	else if(mp[j]%2==1){
		mp[j+1]+=(mp[j]-1)/2;
		mp[j]-=(mp[j]-1)/2;
	}
}
cout<<mp[1]<<' '<<mp[2]<<' '<<mp[4]<<' '<<mp[8];
// ll i=1;ll k=1;
// while(k<25){
// 	cout<<mp[i]<<' ';
// 	i=i<<k;
// 	k++;
// }
cout<<endl;
// for(ll i=0;i<n;i++){
// 	if(arr[i][0]==2){
// 		ll s=1;bool check=true;
// 		ll k=arr[i][1];
// 		while(k){
// 			if(s&k!=0){if(mp[s]==0){check=false;;break;}k=k^s;}

// 		}
// 		if(check){cout<<"YES"<<endl;}
// 		else{cout<<"NO"<<endl;}
// 	}
// }

return 0;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;

mahadev();

 return 0;
}