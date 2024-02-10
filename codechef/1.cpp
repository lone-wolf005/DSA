//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     vector<int>v1(n);
     for(int i=0;i<n;i++)cin>>v1[i];

     unordered_map<int,pair<int,int>>m1;
     int cnt = 1;
     vector<int>ans;
     for(auto x:v1){
        if(m1.count(x)){
            if(m1[x].second > 0){
                ans.push_back(m1[x].first);
                m1[x].second=m1[x].second-1;
            }
            else {
                ans.push_back(cnt);
                m1[x].first=cnt;
                m1[x].second=x-1;
                cnt++;
            }
        }
        else{
            ans.push_back(cnt);
            m1[x].first=cnt;
            m1[x].second=x-1;
            cnt++;
        }
     }
     
     bool is =false;
     for(auto x:m1){
        if(x.second.second>0){is=true;break;}
     }
     if(is)cout<<-1;
     else for(auto x:ans)cout<<x<<" ";
     cout<<endl;
 }
}
int main(){
Radhe();
return 0;
}