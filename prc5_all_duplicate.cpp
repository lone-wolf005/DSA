#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int size ;
    cin>>size;
    vector<int>v1;
    vector<int>ans;
for(int i=0;i<size;i++){
    int tm;
    cin>>tm;
     v1.push_back(tm); 
}
sort(v1.begin(),v1.end());
for(int i=0;i<size-1;i++){
    if(v1[i]==v1[i+1]){
        ans.push_back(v1[i]);
    }
}
for(auto x:ans){
    cout<<x<<" ";
}
return 0;
}