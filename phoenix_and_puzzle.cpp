#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>

bool isPerfectSquare(int num) {
    if (num < 0) return false; // Negative numbers are not perfect squares
    int root = static_cast<int>(sqrt(num)); // Calculate the integer square root of the number
    return (root * root == num); // Check if the square of the root equals the number
}

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
int n;
cin>>n;
int z=n/2;
int a=n/4;
if(n%2!=0){
    cout<<"NO"<<endl;
}
else if(isPerfectSquare(z)){
        cout<<"YES"<<endl;
}
else if(n%4!=0){
    cout<<"NO"<<endl;
}
else if(isPerfectSquare(a)){
    cout<<"YES"<<endl;
}
else{cout<<"NO"<<endl;}
}
 return 0;
}