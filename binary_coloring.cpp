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
ll x;
cin>>x;
vector<ll>vec;
for(int i=0;i<=log2(x)+1;i++){
    vec.push_back(0);
}
int k=log2(x)+1;
vec[k]=1;
int r=pow(2,k)-x;
int i=k-1;
while(r){
if(vec[i+1]!=0){
    k--;;
}
else if(r-pow(2,i)<0){i--;}
else if(r-pow(2,i)>0){r-=pow(2,i);i--;vec[i]=-1;}
else if(r-pow(2,i)==0){r-=pow(2,i);vec[i]=-1;}
}
for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<' ';
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