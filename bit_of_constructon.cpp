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
ll k;
cin>>n>>k;
vector<ll> vec;
    ll count = 0;
    while (n > 0) {
        int a;
        a=n&1;
        vec.push_back(a);
        n >>= 1; 
    }
    ll s=0;
    for(ll i=0;i<vec.size(),k>1;i++){
        if(vec[i]==1){
        cout<<pow(2,i)<<' ';k--;}
        s+=pow(2,i);
    }
cout<<n-s<<' ';
k--;
while(k--){
    cout<<0<<' ';
}cout<<endl;
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