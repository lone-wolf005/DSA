//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool myfun(pair<int,int>p1,pair<int,int>p2){
    if(p1.first == p2.first){
        return p1.second < p2.second;
    }
    else p1.first > p2.first;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ans;
        // vector<int>v1;
        map<int,vector<int>,greater<int>>m1;
        for(int i = 0;i<n;i++){
            int tm;
            cin>>tm;
           if(tm%k==0)ans.push_back(i+1);
           else m1[tm%k].push_back(i+1);
        }
        for(auto x:m1){
            for(auto y:x.second){
                ans.push_back(y);
            }
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
       cout<<endl;
    }
return 0;
}