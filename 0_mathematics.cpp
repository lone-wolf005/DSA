//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M = 1e9+7;
long long int binpow(int a,int b,int m){
    long long int res = 1;
    while(b){
        if(b&1){
          res = (1LL*res*a)%m;
          res%=m;
        }
        a = a*a;
        b>>=1;
    }
    return res;
}
int inverse(int b,int m){
    return binpow(b,m-2,m);
}
int main(){
// counting number of divisor of 1 to n of all number from 1 to n
    // int n;
    //  cin>>n;
    // vector<int>div(n+1,0);
    // for(int i = 1;i <= n ;i++){
    //     for(int j = i ; j<=n;j+=i){
    //         div[j]++;
    //     }
    // }
    // for(auto x:div){
    //     cout<<x<<endl;   
    // }

    //  sieve algorithms

    // int n ;
    // cin>>n;
    // vector<int>prime(n+1,1);
    // prime[0] = prime[1]=0;
    // for(int i =2;i<=n;i++){
    //     if(!prime[i])continue;
    //     for(int j = i*i;j<=n;j+=i){
    //         prime[j]=0;
    //     }
    // }
    // // for(auto x:prime)cout<<x<<endl;
    // for(int i =0;i<=n;i++){
    //     if(prime[i])cout<<i<<endl;
    // }

    // division using modular arithmatic
    int a ,b;
    cin>>a>>b;
    int ans1 =( a/b)%M;
    int ans2 = ( a%M * binpow(b,M-2,M))%M;
    cout<<ans1<<endl;
    cout<<ans2<<endl;
return 0;
}

