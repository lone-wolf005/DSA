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
        // int ans = 0;
        int k =n-1;
        if(n==1)cout<<1<<endl;
        else if(n==2)cout<<1<<" "<<0<<endl;
        else{
            int cnt = 0;
            while(k){
                k>>=1;
                cnt++;
            }
            int ans = 1<<(cnt-1);
            for(int i=n-1;i>=ans;i--){
                cout<<i<<" ";
            }
            for(int i=0;i<ans;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

return 0;
}