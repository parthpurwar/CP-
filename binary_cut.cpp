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
string str;
cin>>str;
bool check = false;
int m=1;
for(int i=1;i<str.size();i++){
    if(str[i]!=str[i-1]){m++;}
    if(str[i]=='0'&&str[i+1]=='1'){check=true;}
}
if(check){cout<<m-1<<endl;}
else{cout<<m<<endl;}
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