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
bool check(ll n){
    while(n){
        if(n%10>1){
            return false;
        }
        n=n/10;
    }
    return true;
}
int mahadev()
{
    ll n;
    cin>>n;
const int MAX = 100'007;
const int MOD = 1'000'000'007;
vector<ll> bd;
if(n==1){
    cout<<"YES"<<endl;return 0;
}
for (int i = 2; i < MAX; i++) {
    if(check(i)){bd.push_back(i);}
}
for(ll j=0;j<bd.size();j++){
    if(n%bd[j]==0){if(check(n/bd[j])){cout<<"YES"<<endl;return 0;}}
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