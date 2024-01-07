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
    vector<int>v1(n);
    for(int i =0;i<n;i++){
        cin>>v1[i];
    }
    vector<int>m;
    if(k==2){
        m.push_back(2);
        m.push_back(4);
        m.push_back(6);
        m.push_back(8);
    }
    if(k==4){
        m.push_back(4);
        m.push_back(8);
    }
    if(k==3){
        m.push_back(3);
        m.push_back(6);
        m.push_back(9);
    }
    if(k==5){
        m.push_back(5);
        m.push_back(10);
    }
    int ans = INT_MAX;
    int even=0;
    int odd=0;
    for(int i =0;i<n;i++){
        if(v1[i]&1)odd++;
        else even++;
    }
    if(k==2 && even)ans=0;
    else if(k==2)ans=1;
    else if(k==4){
        if(even>=2)ans=0;
        else if(odd && even)ans=1;
        else ans = 2;
    }
    for(auto x:v1){
            for(auto y:m){
                if(x<=y)ans=min(ans,y-x);
            }
        }    
    cout<<ans<<endl;

}
return 0;
}