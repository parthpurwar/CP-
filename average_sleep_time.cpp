#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define lld long double
#define f(i,a,b) for(int i = a; i < b; i++)
#define fe(i,a,b) for(int i = a; i >= b; i--)
#define vll vector<long long int>
#define pb push_back
#define pii pair<int, int>
#define si set<int>
#define sc set<char>
#define mii map<int, int>
#define sor(v) sort(v.begin(),v.end())
#define all(v) v.begin(),v.end()
int mahadev()
{
int n,k;
cin>>n>>k;
vector<int>vec;
vector<int>sum;
int s=0;
for(int i=1;i<=n;i++){
    int a;
    cin>>a;
    vec.push_back(a);
    if(i<k){s+=a;}
    else if(i==k){s+=a;sum.push_back(s);}
    else{s+=a;s-=vec[i-k-1];sum.push_back(s);}
}int sp=0;
for(int j=0;j<sum.size();j++){
    sp+=sum[j];
    cout<<sum[j]<<' ';
}
int ans=sp/k;
// cout<<ans<<endl;

    return 0;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

mahadev();

 return 0;
}