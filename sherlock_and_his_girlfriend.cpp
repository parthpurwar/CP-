#include<bits/stdc++.h>
using namespace std;

bool Prime(int n) {
    // Check for less than 2, which are not prime
    if (n <= 1) return false;
    // Check for 2 and 3, which are prime
    if (n <= 3) return true;
    // Eliminate multiples of 2 and 3
    if (n % 2 == 0 || n % 3 == 0) return false;
    // Check for prime status using 6k ± 1 rule
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

int n;
cin>>n;
int arr[n];
for(int i=2;i<=n+1;i++){
    if(Prime(i)){
        arr[i-2]=1;
    }
    else{
        arr[i-2]=2;
        }
    }

cout<<2<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<' ';
}

 return 0;
}