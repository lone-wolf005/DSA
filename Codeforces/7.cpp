//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    // int a;
    // int b;
    // int lcm = INT_MAX;
    int a = 1;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0){
            a=max(a,(max(i,n/i)));
        }
    }
     cout<<a<<" "<<n-a<<endl;
}
return 0;
}