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
     ll sum = 0;
     ll neg = 0;
     ll zero = 0;
     int mini = INT_MAX;
     for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            int tm;
            cin>>tm;
            if(tm<0)neg++;
            if(tm==0)zero++;
            mini = min(mini,abs(tm));
            sum+=abs(tm);
        }
     }
     if((neg&1) && (!zero)){
        cout<<sum-(2*mini)<<endl;
     }
     else cout<<sum<<endl;
 }
}
int main(){
Radhe();
return 0;
}