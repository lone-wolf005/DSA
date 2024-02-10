//Radhe Radhe
// frog can jumps upto k steps
//const h[i]-h[j] i-des j-intial
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e5+10;
int k;
int h[N];

int func(int i){
    if(i==0)return 0;
    int const = INT_MAX;
    if(dp[i]!=-1){
        return dp[i];
    }
    for(int j = 1;j <= k;j++){
        if(i-j > 0){
            cost = min(cost,abs(h[i-j]-h[i])+func(i-j));
        }
        return dp[i]=cost;
    }


}
int main(){
memset(dp,-1,sizeof(dp));
int n;
cin>>n>>k;
for(int i =0;i<n ; i++){
    cin>>h[i];
}
cout<<func(n);
return 0;
}