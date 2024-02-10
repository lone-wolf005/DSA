//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     ll a,b;
     cin>>a>>b;
     ll steps =0;
     if(a<b)steps+=1;
     else if(a==b)steps+=2;
     else{
        steps=INT_MAX;
        for(int i=0;i<=sqrt(a);i++){
            if(b==1 && i==0)continue;
             ll ans = i;
             ll temp = a;
           while(temp){
            temp/=(b+i);
            ans++;
            }
        steps=min(steps,ans);
        }
     }
     cout<<steps<<endl;
 }
}
int main(){
Radhe();
return 0;
}