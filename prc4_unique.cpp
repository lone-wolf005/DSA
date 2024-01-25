#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int n;
cin>>n;
vector<int>v1;
int ans=0;
for(int i=0;i<n;i++){
    int tm;
    cin>>tm;
    ans=ans^tm;
    
}
cout<<ans<<endl;

return 0;
}