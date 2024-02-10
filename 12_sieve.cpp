//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int N = 10e5 +10;
vector<bool>isprime(N+2,true);
prime[0] = prime[1] = false;
for(int i = 2; i < N ; i++){
    if(isprime[i]){
        for(int j = 2*i ; j < N ; j+=i){
            isprime[j]=false;
        }
    }
}
return 0;
}