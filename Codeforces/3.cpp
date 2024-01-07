//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>p(n);
    vector<int>c(n);
    vector<pair<int,int>>cp(n);
    for(int i =0;i<n;i++){
        cin>>p[i];
    }
    for(int i =0;i<n;i++){
        cin>>c[i];
    }
    for(int i =0;i<n;i++){
        cp.push_back(make_pair(c[i],p[i]));
    }
    sort(cp.begin(),cp.end());
    int count = n-1;
    long long int cost = k;
    for(auto x:cp){
        if(x.first < k && count){
            int y= min(x.second,count);
            cost  += 1LL* x.first*y;
            count -=y;
        }
        else break;
    }
    if(count)cost += (1LL*count*k);
    cout<<cost<<endl;
}
return 0;
}