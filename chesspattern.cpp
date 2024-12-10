#include<bits/stdc++.h>
using namespace std;


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int l,c;
int k=0;
cin>>l>>c;
for(int i=0;i<l;i++){
    if(i%2==0)
        {k=0;}
    else{k=1;}
    for(int j=0;j<c;j++){
        if(k==0)
            {cout<<'*'; k=1;}
        else{cout<<'.'; k=0;}
    }
    cout<<endl;
}
 return 0;
}