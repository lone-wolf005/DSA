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
    bool is_possibe = false;
    unordered_map<ll,ll>m1;
    for(int i=0;i<n;i++){
        ll tm;
        cin>>tm;
        m1[tm]++;
        if(m1[tm]==2){
            is_possibe = true;
        }
    }
    is_possibe?cout<<"YES":cout<<"NO";
    cout<<endl;
}
return 0;
}