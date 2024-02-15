//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
    int n;char x;
    cin>>n;
    cin>>x;
    string s;
    cin>>s;
    int ans = INT_MIN;

    for(int i=0;i<n;i++){
        if(s[i]==x){
            int ans1=0;
            while(i<n && s[i]!='g'){
                i++;
                ans1++;
            }
            ans= max(ans1,ans);
        }
    }
    int back = 0;
    int ans2 = 0;
    for(int i=n-1;i>=0;i--){
        ans2++;
        if(s[i]=='g')break;
        else if(s[i]==x){
            back = ans2;
            break;
        }
    }
    ans2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='g')break;
        else ans2++;
    }
    if(back)back+=ans2;
    ans = max(ans,back);
    cout<<ans<<endl;

 }
}
int main(){
Radhe();
return 0;
}