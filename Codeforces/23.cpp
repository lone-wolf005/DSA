//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e6+7;
int main(){
vector<int>primes;
vector<bool>is_prime(N,true);
is_prime[0]=false;
is_prime[1]=false;
for(int i=2;i<N;i++){
    if(is_prime[i]){
        for(int j=2*i;j<=N;j+=i){
            is_prime[j]=false;
        }
    }
}
for(int i=2;i<N;i++){
    if(is_prime[i])primes.push_back(i);
}
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    ll a,b;
    int i;
    for( i=0;i<N;i++){
        if(primes[i]-1>=n){a=primes[i];break;}
    }
    for(i;i<N;i++){
        if(primes[i]-a>=n){b=primes[i];break;}
    }
    cout<<1LL*a*b<<endl;

 }
return 0;
}