//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     ll n,k,b,s;
     cin>>n>>k>>b>>s;
     ll x = s/k;
     if(x<b)cout<<-1<<endl;
     else if(x==b){
        for(int i=0;i<n-1;i++)cout<<0<<" ";
        cout<<s<<endl;
     }
     else {
        ll y = (x-b)+1;
        if(y<=(n-1)){
            cout<<s-(x-b)*k<<" ";
             s -=(s-(x-b)*k);
            for(int i=1;i<n;i++){
                cout<<min(k-1,s)<<" ";
                s-=(k-1);
                if(s<=0)s=0;
            }
            cout<<endl;
        }
        else cout<<-1<<endl;
     }

 }
}
int main(){
Radhe();
return 0;
}