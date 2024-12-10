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
int n;
int k;
cin>>n>>k;
vector<int>a;
vector<int>b;
for(int i=0;i<n;i++){
    int t;
    cin>>t;
    a.push_back(t);
}
for(int j=0;j<n;j++){
    int t;
    cin>>t;
    b.push_back(t);
}int m=0;int sum=0;int ans=0;int sa=0;int sb=0;
for(int i=0;i<n&&i<k;i++){
m=max(m,b[i]);
sa+=a[i];
sb=m*(k-i-1);
sum=max(sum,sa+sb);
cout<<sa<<' '<<sb<<' '<<sum<<endl;
}
// cout<<sum<<endl;
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