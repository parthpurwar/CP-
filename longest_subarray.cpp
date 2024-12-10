typedef long long int ll;
#define pb(x) push_back(x);
#define vll vector<long long int>
 
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vll a;
    for(int i=0;i<n;i++)
    {
        ll u;
        cin>>u;
        a.pb(u);
    }
    ll x;cin>>x;
    int len=INT_MAX;
    int l=0,r=0;
    int ans_l=0,ans_r=0;
    ll sum=0;
    for(;r<n;r++)
    {
        sum+=a[r];
        while(sum>=x)
        {
            if(len>(r-l+1))
            {
                len=r-l+1;
                ans_l=l;
                ans_r=r;
            }
            sum-=a[l];
            l++;
        }
    }
    if(len!=INT_MAX)
    {
       cout<<ans_r-ans_l+1;
    }
    else
    {
        cout<<"0\n";
    }
      
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
   
       solve();
    
return 0;
}