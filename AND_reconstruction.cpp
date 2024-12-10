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
vector<ll> b;
for(int i=0;i<n-1;i++){
    int k;
    cin>>k;
    b.push_back(k);
}
vector<ll> a;
a.push_back(b[0]);
for(ll i=0;i<n-2;i++){
ll k=b[i]|b[i+1];
a.push_back(k);
}
a.push_back(b[n-2]);
for(ll i=0;i<n-1;i++){
    if(a[i]&a[i+1]!=b[i]){cout<<-1<<endl;return 0;}
}
for(ll i=0;i<n;i++){
    cout<<a[i]<<' ';
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