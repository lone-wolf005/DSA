//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0;i<n;i++)cin>>v1[i];
    // vector<pair<int,int>>temp;
    priority_queue<pair<int,int>>temp;
    for(int i=0;i<n;i++){
        temp.push({v1[i],i});
    }
   
    vector<int>ans(n+1);
    v1.push_back(0);
    int j = 1;
    int k = -1;
    ll value = 0;
    for(int i=0;i<n;i++){
         if(i&1){
            auto x = temp.top();
            temp.pop();
            ans[x.second + 1]= (k);
            value+=1LL*2*x.first*abs(k);
            k--;
            
         }
         else{
            auto x = temp.top();
            temp.pop();
            ans[x.second + 1]= (j);
            value+=1LL*2*x.first*abs(j);
            j++;
         }
    }
    cout<<value<<endl;
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;

}
return 0;
}