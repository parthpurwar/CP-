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
ll n,k;
cin>>n>>k;
vector<ll>vec;
ll i=0;
while(pow(2,i)<k){
i++;
}
if(n==1){
    cout<<k<<endl;return 0;
}
else{
    ll a=pow(2,i-1)-1;
    cout<<a<<' '<<k-a<<' ';
    for(ll i=0;i<n-2;i++){
        cout<<0<<' ';
    }
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