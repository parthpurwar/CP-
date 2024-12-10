#include<bits/stdc++.h>
using namespace std;
void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
int a,b;
cin>>a>>b;
if(a==b){
    cout<<"NO";
}
else if(b==1){
    b=a;a=1;
cout<<"YES"<<endl;
cout<<a<<' '<<a*b<<' '<<(b+1)*a;}
else{cout<<"YES"<<endl;
cout<<a<<' '<<a*b<<' '<<(b+1)*a;}


}
return 0;




}