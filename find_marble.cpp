#include<bits/stdc++.h>
using namespace std;
#define ll long long;
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
void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

int n;int s;int t;
cin>>n>>s>>t;
vector<int>vec;
vec.push_back(0);
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    vec.push_back(k);
}
int a=s;
int m=0;
if(s==t){
    cout<<0<<endl;
}
else{
while(a!=s&&a!=t){
    a=vec[a];
    m++;
}
if(a==s){cout<<-1<<endl;}
else{
    cout<<m+1<<endl;
}
}

 return 0;
}