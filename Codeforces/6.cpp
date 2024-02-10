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
    vector<int>a(n);
    vector<int>b(n);
    unordered_map<int,int>a_count;
    unordered_map<int,int>b_count;
    for(int i =0;i<n;i++)cin>>a[i];
    for(int i =0;i<n;i++)cin>>b[i];
    int i = 0;
    while(i<n){
        int val = a[i];
        int count = 0;
        while(a[i]==val && i<n){
            count++;
            i++;
        }
        a_count[val] = max(a_count[val],count);
    }
    i=0;
    while(i<n){
        int val = b[i];
        int count = 0;
        while(b[i]==val && i<n){
            count++;
            i++;
        }
        b_count[val] = max(b_count[val],count);
    }
    int ans = 0;
    // for(auto x:a_count)cout<<x.first<<" "<<x.second<<endl;
    // for(auto x:b_count)cout<<x.first<<" "<<x.second<<endl;
    for(auto x:a_count){
      int y = x.first;
      int cnt = x.second;
      int cnt2 = b_count[y];
      ans = max(ans,cnt+cnt2);
    }
    for(auto x:b_count){
      int y = x.first;
      int cnt = x.second;
      int cnt2 = a_count[y];
      ans = max(ans,cnt+cnt2);
    }
    cout<<ans<<endl;

}
return 0;
}