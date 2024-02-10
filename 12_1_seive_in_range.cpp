//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>v2;
void sieve(int right){
int N = floor(sqrt(right))+1;
vector<bool>prime(N+1,true);
// prime[0] = prime[1] = false;
for(int i = 2; i <= N ; i++){
    if(prime[i]){
        for(int j = 2*i ; j <= N ; j+=i){
            prime[j]=false;
        }
    }
}
for(int i = 2;i <= N ;i++){
    
    if(prime[i]){v2.push_back(i);
      cout<<i<<" ";
    }
    
}
//  return v2;
cout<<endl;
}
void segmented_sieve(int left,int right,vector<int>&v1){
        sieve(right);
       vector<bool>isprime((right - left) +1, true);
    //    vector<int>v1;
       for(auto x : v2){
          if(x>=left) v1.push_back(x);
           int low = (left/x) * x;
           if(low < left){
               low += x;
           }
           
           for(int i = low ; i <= right; i+=x){
               if(isprime[i-left]){
                   isprime[i-left] = false;
               }
           }
       }
       for(int i = 0; i<isprime.size();i++){
           if(isprime[i]){
               v1.push_back(i+left);
           }
       
    }
    // return v1;
}
int main(){
    v2.clear();
    vector<int>v1 ;
    segmented_sieve(18,72,v1);
    for(auto x:v1){
        cout<<x<<" ";
    }

return 0;
}