//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     ll n,k;
     cin>>n>>k;
     if(k<=(n/2)){
        if(n&1){
            ll odd = n/2 + 1;
            odd-=(k-1);
            if(odd&1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            ll odd = n/2;
            n-=(k-1);
            if(odd&1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
     }
     else cout<<"NO"<<endl;

 }
}
int main(){
Radhe();
return 0;
}