//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
    ll x,y,k;
    cin>>x>>y>>k;
    ld extra = y*(k) + (k-1);
    ll trades = ceil(extra/(x-1));
    trades+=k;
    cout<<trades<<endl;
 }
}
int main(){
Radhe();
return 0;
}

/*
//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     ld x,y,k;
     cin>>x>>y>>k;
     long double req = k*y + k;
     ld i = 1;
     ll ans = 0;
     while((i*x)< req){
        ans+=i;
        i*=x;
     }
     req -= i;
     ll extra = ceil(req/(x-1));
    //  extra== (req*(x-1))?extra:extra++;
     ans+=extra;
     ans+=k;
     cout<<ans<<endl;
 }
}
int main(){
Radhe();
return 0;
}


*/