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
ll median(ll a, ll b, ll c){
        ll secondLargest;
    if(a==b){secondLargest = a;}
    else if(b==c){secondLargest= b;}
    else if(a==c){secondLargest=a;}
    else if ((a > b && a <c) || (a > c && a < b)) {
        secondLargest = a;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        secondLargest = b;
    } else {
        secondLargest = c;
    }
return secondLargest;
}
int mahadev()
{
ll n;
cin>>n;
vector<ll>vec;
for(ll i=0;i<n;i++){
    ll k;
    cin>>k;
    vec.push_back(k);
}
if(n==2){
    cout<<min(vec[0],vec[1])<<endl;
}
else{
    ll s=0;
for(ll i=0;i<n-2;i++){
    
s=max(s,median(vec[i],vec[i+1],vec[i+2]));
}
cout<<s<<endl;
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