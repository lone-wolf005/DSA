//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int x;
    cin>>x;
    vector<int>v1(3);
    for(int i=0;i<3;i++){
        cin>>v1[i];
    }
    vector<int>dp(x+1,INT_MIN);

    // defining the total possible value of states
    // each state dp[x] give the answer of minimun no of coins required to get sum of x
    dp[0]=0;
    for(int i =1;i<=x;i++){
        for(int j = 0; j<3;j++){
            if(i>=v1[j]){
                dp[i]=max(dp[i],1+dp[i-v1[j]]);
            }
        }
  
    }
       if(dp[x]==INT_MIN)cout<<-1<<endl;
     else cout<<dp[x]<<endl;


return 0;
}