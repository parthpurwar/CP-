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
set<ll>vec;
ll k=1;
vec.insert(n);
while(k<=n){
	ll a= k & n;
if(a!=0&&k!=n){vec.insert(k ^ n);}
k=k << 1;

}
cout<<vec.size()<<endl;
for(auto i=vec.begin();i!=vec.end();i++){
	ll k=*i;
	cout<<k<<' ';
}
cout<<endl;
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