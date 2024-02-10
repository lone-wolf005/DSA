//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const long long M = 10e9 + 7 ;
long long exp2(int a,int b){
   long long ans = 1;
   while(b){
      if(b&1){
        ans = ((ans%M ) * (a%M))%M;
      }
      a = ((a%M)*(a%M))%M;
      b>>=1;
   }
   return ans;
}
int main(){
    cout<<exp2(2,3)<<endl;

return 0;
}