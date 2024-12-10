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
int p1,p2,p3;
cin>>p1>>p2>>p3;
int k=p1+p2+p3;
int d;
if(k%2!=0){
    cout<<-1<<endl;
}
else{
    if((p1==0&&p2==0)||(p3==0&&p2==0)||(p1==0&&p3==0)){
        cout<<0<<endl;
    }
    else{
    while((p1!=0&&p2!=0)||(p3!=0&&p2!=0)||(p1!=0&&p3!=0)){
        if(p1==0){
            p2--;p3--; d++;
        }
        else if(p2==0){
            p1--;p3--;d++;
        }
        else if(p3==0){
            p1--;p2--;d++;
        }
        else{
            p2--;p3--;d++;
            p1--;p3--;d++;
        }
    }cout<<d<<endl;}
}
}
 return 0;
}