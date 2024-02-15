//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     int n,k;
     cin>>n>>k;
     int ans = INT_MAX;
     int odd = 0;
     int even = 0;
     for(int i=0;i<n;i++){
        int tm;
        cin>>tm;
        if(tm&1)odd++;
        else even++;
        int ans1 = !(tm%k)?0:(k-(tm%k));
        ans = min(ans1,ans);
     }
     if(even >=2 && k==4)ans=0;
     else if(odd && even && k==4)ans = min(ans,1);
     else if(odd>=2 && k==4)ans = min(ans,2);
     cout<<ans<<endl;
 }
}
int main(){
Radhe();
return 0;
}