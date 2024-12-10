#include<bits/stdc++.h>
using namespace std;

using lli=long long;
lli n,a,b;
int check(lli mid){
    lli total=0;
    if(mid==0) return 1;
    else {
        for(lli i=1;i<=mid;i++){
        total+=b-i+1;
    }
        
    }
    
    if(total>mid*a)return 1;
    else return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        
        cin>>n>>a>>b;
        lli lo=0;
       lli hi=min(n,b);
        lli ans=0;
        while(lo<=hi){
            lli mid=lo+(hi-lo)/2;
            if(check(mid)){
                ans=mid;
                lo=mid+1;
            }
            else hi=mid-1;
            
        }
        lli total=0;
        if(ans!=0){
            for(lli i=1;i<=ans;i++){
                total+=b-i+1;
            }
        }
        total+=(n-ans)*a;
        cout<<total<<endl;
}
}