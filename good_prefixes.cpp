#include<bits/stdc++.h>
using namespace std;

long long int sum(vector<long long int> vec, long long int n){
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+vec[i];
    }
return sum;
}
bool check(vector<long long int> vec,int j)
{
sort(vec.begin(),vec.end());
if(sum(vec,j-1)==vec[j-1]){
    return true;
}
else{return false;}
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int n;
cin>>n;
vector<long long int> vec;
for(int i=0;i<n;i++){
    long long int k;
    cin>>k;
    vec.push_back(k);
}
long long int m=vec[0];
long long int s=vec[0];
long long int a=0;
if(vec[0]==0){a++;}
for(int i=1;i<n;i++){
     if(vec[i]>=m){
        s=s+m;
        m=vec[i];
     }
     else{
        s=s+vec[i];
     }
     if(s==m){
            a++;
     }
}
cout<<a<<endl;
}
 return 0;
}