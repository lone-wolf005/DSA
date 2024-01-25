//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e5+6;
int dp[N];
int fib(int n){
    if(n==0){return 0;}
    if(n==1){return 1;}
    if(dp[n] != -1){
        return dp[n];
    }
    else return dp[n] = fib(n-1) + fib(n-2);
}
int main(){
    for(int i = 0;i<N;i++){
        dp[i]= -1;
    }
    cout<<fib(6)<<endl;

return 0;
}