//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    sort(v1.begin(),v1.end());
    int i = 0;
    int j= n-1;
    ll ans = 0;
    while(j>=0 && n>0){
        if(v1[j]>k){
            n--;
            ans++;
            j--;
        }
        else{
            ll temp = k/v1[j] + 1;
            n-=temp;
            j--;
            if(n>=0)ans++;
            else break;
        }
    }
    cout<<ans<<endl;

return 0;
}