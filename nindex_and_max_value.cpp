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
ll n,m;
cin>>n>>m;
vector<ll>vec;
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    vec.push_back(k);
}
vector<ll>pr;
for(ll i=0;i<m;i++){
    char a;ll l,r;
    cin>>a;cin>>l>>r;
    ll in=0;
    if(a=='+'){
        for(ll i=0;i<n;i++){
            if(vec[i]<=r&&vec[i]>=l){
                vec[i]++;
            }
            in=max(vec[i],in);
        }
        pr.push_back(in);
    }
    else if(a=='-'){
        for(ll i=0;i<n;i++){
            if(vec[i]<=r&&vec[i]>=l){
                vec[i]--;
            }
            in=max(vec[i],in);
        }
        pr.push_back(in);
    }
}
for(ll i=0;i<m;i++){
    cout<<pr[i]<<' ';
}
cout<<endl;return 0;
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