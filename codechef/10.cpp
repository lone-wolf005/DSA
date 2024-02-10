//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     ll n;cin>>n;
     vector<ll>v1(2*n);
     for(ll i=0;i<(2*n);i++)cin>>v1[i];
     for(auto x:v1)cout<<x<<endl;
     unordered_map<ll,ll>m1;
     for(int i=0;i<2*n;i++){
        if(m1.count(v1[i]))m1[v1[i]]=((i-m1[v1[i]])-1);
        else m1[v1[i]]=i;
     }
    //  for(auto x:m1)cout<<x.first<<" "<<x.second<<endl;
    priority_queue<pair<ll,ll>>pq;
    for(auto x:m1){
        pq.push({x.second,x.first});
    }
    while(!pq.empty()){
        cout<<pq.top().first<<" ";
        pq.pop();
    }
    cout<<endl;
 }
}
int main(){
Radhe();
return 0;
}