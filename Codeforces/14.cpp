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
     vector<int>v1(n+1);
     unordered_map<int,int>m1;
     for(int i=1;i<=n;i++){
          cin>>v1[i];
          m1[v1[i]]++;
     }
     bool poss = true;
     for(auto x:m1){if(x.second==1){poss=false;break;}}
     if(!poss)cout<<-1<<endl;
     else{
        vector<int>ans;
        int s = 1;
        for(int i=1;i<n;i++){
            if(v1[i]==v1[i+1]){
                ans.push_back(i+1);
            }
            else{
                ans.push_back(s);
                s=i+1;
            }
        }
        ans.push_back(s);
        for(auto x:ans)cout<<x<<" ";
        cout<<endl;
     }
     
 }
}
int main(){
Radhe();
return 0;
}