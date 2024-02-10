//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n,k;
    cin>>n>>k;
    if(n==k){cout<<0<<endl;continue;}
    else if(n>k)swap(n,k);
    if(k%n)cout<<-1<<endl;
    else{
            k = k/n;
    ll steps = 0;
    while(!(k%8)){
        steps++;
        k/=8;
    }
    while(!(k%4)){
        steps++;
        k/=4;
    }
    while(!(k%2)){
        steps++;
        k/=2;
    }
    if(k==1)cout<<steps<<endl;
    else cout<<-1<<endl; 
    }
    
    }
    
return 0;
}