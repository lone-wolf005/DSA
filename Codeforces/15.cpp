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
        string s;
        cin>>s;
        int w=0;
        int b=0;
        int ans = n;
        for(int i=0;i<k;i++){
            if(s[i]=='W')w++;
            else b++;
        }
        ans = min(ans,w);
        for(int i=k;i<n;i++){
            if(s[i]=='W')w++;
            else b++;
            if(s[i-k]=='W')w--;
            else b--;
            ans = min(ans,w);
        }
        cout<<ans<<endl;
    }
return 0;
}