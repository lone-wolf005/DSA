//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
    ll n,x;
    cin>>n>>x;
    ll l=0,r=10e9+5;
    ll total = 0;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        if(x+a<l || a-x > r){
           total++;
           l = a-x;
           r = a+x;
        }
        else{
            l = max(l,a-x);
            r = min(r,a+x);
        }
    }
        cout<<total<<endl;

}
return 0;
}