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
string a,b;
cin>>a>>b;
ll arr[m][2];
for(ll i=0;i<m;i++){
    ll l,r;
    cin>>l>>r;
    arr[i][0]=l;
    arr[i][r]=r;
}
for(ll i=0;i<m;i++){
    ll c=0;
    for(ll j=arr[i][0]-1;j<arr[i][1];j++){
        if(a[j]!=b[j]){
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
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