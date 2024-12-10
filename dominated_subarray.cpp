typedef long long int ll;
#define pb(x) push_back(x)
#define vll vector<long long int>
#define ordered_set tree<ll, null_type,less <ll>, rb_tree_tag,tree_order_statistics_node_update> 

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

const char nl='\n';
const int MOD=1e9+7;

void JaiBajrangBali()
{
   int n;cin>>n;
   vll a(n);
   map<ll,ll>mp;
   vector<pair<ll,ll>>ind;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    mp[a[i]]++;
    ind.pb(make_pair(a[i],i));
   }   
   sort(ind.begin(),ind.end());
   bool notgood=true;
   for(int i=0;i<n;i++)
   {
    if(mp[a[i]]>1)
    {
        notgood=false;
    }
   }
   if(notgood)
   {
    cout<<-1<<nl;
    return;
   }
   ll mn=INT_MAX;
   for(int i=0;i<n;i++)
   {
    
    if(mp[ind[i].first]>1)
    {
        for(int j=i+1;j<i+mp[ind[i].first];j++)
        {
            mn=min(mn,(ind[j].second-ind[j-1].second+1));
        }
    }
    i=mp[ind[i].first]+i-1;
   }
   cout<<mn<<nl;




}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tc;cin>>tc;
    while(tc--)
    {
       JaiBajrangBali();
    }
    return 0;
}