#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n+1),p(n+1);
    string s(n+1,'0');
    for(int i = 1; i <= n; i++) cin >> a[i];
     for(int i = 1; i <= n; i++) cin >> s[i];
     for(int i = 1; i<= n ;i++) p[i] = p[i-1] + a[i];
     int it = n;
     long long ans = 0;
     for(int i = 1; i <= n; i++) {
        if(s[i] == 'L') {
            while(it > i && s[it] != 'R') it--;
            if(it > i) {
                ans += p[it] - p[i-1];
                it--;
            }
        }
     } 
     cout << ans << endl;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}