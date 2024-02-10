//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll Xor(ll a){
    if(a%4==0)return a;
    else if(a%4 ==1)return 1;
    else if(a%4 == 2)return a+1;
    else return 0;
}
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     ll a,b;
     cin>>a>>b;
     ll sum = Xor(a-1);
    //  cout<<a<<endl;
    //  cout<<sum<<endl;
     ll x = b^sum;
     if(sum==b)cout<<a<<endl;
     else if(x==a)cout<<a+2<<endl;
     else cout<<a+1<<endl;
 }
}
int main(){
Radhe();
return 0;
}