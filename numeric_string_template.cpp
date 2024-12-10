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
cin>>n;
vector<int>vec;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
int m;
cin>>m;
vector<string>str;
for(int j=0;j<m;j++){
    string st;
    cin>>st;
    str.push_back(st);
}
for(int j=0;j<m;j++){
    if(str[j].size()!=vec.size()){cout<<"NO"<<endl;return 0;}
    
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