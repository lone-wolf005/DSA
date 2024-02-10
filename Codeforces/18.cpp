//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     ll x,y;
     cin>>x>>y;
     ll ans = -1;
     for(int i=0;i<4;i++){
        ll k;
        cin>>k;
        ll a,b;
        for(int j=0;j<k;j++){
            ll tm;
            cin>>tm;
            if(j==0)a=tm;
            if(j==k-1)b=tm;
        }
        if(i==0||i==1)ans = max(ans,(b-a)*y);
        if(i==2||i==3)ans = max(ans,(b-a)*x);
        // cout<<ans<<endl;
     }
     cout<<ans<<endl;
 }
}
int main(){
Radhe();
return 0;
}