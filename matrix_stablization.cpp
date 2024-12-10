#include<bits/stdc++.h>
using namespace std;

auto namah_shivaay()
{
int n;int m;
cin>>n>>m;
int arr[n+2][m+2];
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin>>arr[i][j];
    }
}
for(int p=0;p<n+2;p++){arr[p][0]=0;arr[p][m+1]=0;}
for(int q=0;q<m+2;q++){arr[0][q]=0;arr[n+1][q]=0;}
for(int k=1;k<=n;k++){
    for(int l=1;l<=m;l++){
        if(arr[k][l]>arr[k-1][l]&&arr[k][l]>arr[k][l-1]&&arr[k][l]>arr[k+1][l]&&arr[k][l]>arr[k][l+1]){
                vector<int>vec;
                vec.push_back(arr[k-1][l]);
                vec.push_back(arr[k][l-1]);
                vec.push_back(arr[k+1][l]);
                vec.push_back(arr[k][l+1]);
                sort(vec.begin(),vec.end());
                arr[k][l]=vec[3];
        }
    }
}
for(int a=1;a<=n;a++){
    for(int b=1;b<=m;b++){
        cout<<arr[a][b]<<' ';
    }
    cout<<endl;
}
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{
namah_shivaay();
}
 return 0;
}



#include<bits/stdc++.h>
using namespace std;
#define int long long;
#define ll long long;
#define lld long double;
#define f(i,a,b) for(int i = a; i < b; i++);
#define fe(i,a,b) for(int i = a; i >= b; i--);
#define vll vector<ll>;
#define pb push_back;
#define pii pair<int, int>;
#define si set<int>;
#define sc set<char>;
#define mii map<int, int>;
#define sor(v) sort(v.begin(),v.end());
#define all(v) v.begin(),v.end();
void solve()
{

}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
int tc;cin>>tc;
while(tc--)
{

}
 return 0;
}