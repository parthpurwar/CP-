#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int mahadev(){
    int n;
    cin>>n;
    vector<int>odd;
    vector<int>even;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k%2==0){
            even.push_back(k);
        }
        else{
            odd.push_back(k);
        }
    }
    sort(even.begin(),even.end(),greater<int>());
    sort(odd.begin(),odd.end());
if(odd.size()==0||even.size()==0){cout<<0<<endl;return 0;}
int m=0;
while(even.size()){
if(odd[odd.size()-1]>even[even.size()-1]){
    odd.push_back(odd[odd.size()-1]+even[even.size()-1]);
    even.pop_back();
    m++;
}
else{ll n=odd[odd.size()-1];
odd.pop_back();
odd.push_back(n+even[0]);

m++;

}}
cout<<m<<endl;
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