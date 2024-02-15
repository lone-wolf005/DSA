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
    int mini = INT_MAX;
    vector<int>ans;
     while(n--){
        int n1;
        cin>>n1;
        vector<int>temp(n1);
        for(int i=0;i<n1;i++){
             cin>>temp[i];
             mini=min(mini,temp[i]);
        }
        sort(temp.begin(),temp.end());
        ans.push_back(temp[1]);
     }
     ll sum = mini;
     sort(ans.begin(),ans.end(),greater<int>());
     for(int i=0;i<ans.size()-1;i++){
        sum+=ans[i];
     }
     cout<<sum<<endl;
     
 }
}
int main(){
Radhe();
return 0;
}