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
string n;
cin>>n;
if(n[n.size()-1]=='9'){cout<<"NO"<<endl;return 0;}
if(n[0]!='1'){
    cout<<"NO"<<endl;return 0;
}
for(ll i=1;i<=n.size()-2;i++){
    if(n[i]=='0'){
        cout<<"NO"<<endl;return 0;
    }
}
cout<<"YES"<<endl;return 0;
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