//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     int n,k,r;
     cin>>n>>k>>r;
     r++;
     int x = k/(r);
     int ext = k - (x*r);
     string org="";
     for(int i=0;i<x;i++){
         org+='R';
     }
     string orge=org+'R';
     string ans ="";

     for(int i=0;i<ext;i++){
          ans+=orge;
          ans+='B';
     }
     for(int i=0;i<(r-ext);i++){
        if(i==(r-ext)-1){
            ans+=org;
        }
        else{
            ans+=org;
            ans+='B';
        }
     }
     cout<<ans<<endl;

 }
}
int main(){
Radhe();
return 0;
}