#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define lld long double
#define f(i,a,b) for(int i = a; i < b; i++)
#define fe(i,a,b) for(int i = a; i >= b; i--)
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define si set<int>
#define sc set<char>
#define mii map<int, int>
#define print(a) for(auto u:a) cout<<u<<" "; cout<<endl;
#define sor(v) sort(v.begin(),v.end())
#define all(v) v.begin(),v.end()
 
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
 
signed main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 
    string s; cin >> s;
    int a = s.size() - 1, ans = -1;
    if(a == 0) {cout << s; return 0;}
    while(1) {
        int prod = 1; int n;
        f(i, 0, s.size()) {
            if(i == 0 && s[i] == '0') n = 1;
            else n = s[i] - '0';
            prod *= n;
        }
        ans = max(ans, prod);
        s[a] = '9';
        if(s[a - 1] != '0') {
            n = s[a - 1] - '0';
            n--;
            string x = to_string(n);
            s[a - 1] = x[0];
        }
        a--;
        if(a == -1) break;
    }
   
    cout << ans;
}