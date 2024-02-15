//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     int n;cin>>n;
     int N = 10e6+1;
    vector<bool>isprime(N,true);
   isprime[0] = isprime[1] = false;
   for(int i = 2; i < N ; i++){
    if(isprime[i]){
    for(int j = 2*i ; j < N ; j+=i){
            isprime[j]=false;
        }
    }
}
   vector<int>primes;
   for(int i=2;i<N;i++)if(isprime[i])primes.push_back(i);
   int ind = 0;
   if(n&1){
    cout<<1<<endl;
    n-=1;
    while(n){
        cout<<primes[ind]<<" "<<primes[ind];
        n-=2;
        ind++;
    }
   }
   else{
    while(n){
        cout<<primes[ind]<<" "<<primes[ind];
        n-=2;
        ind++;
    }
      
   }
   cout<<endl;
 }
}
int main(){
Radhe();
return 0;
}