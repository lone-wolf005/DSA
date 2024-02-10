//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   int ans=0;
   int ans1=1;
   for(int i=0;i<n-1;i++){
      if(s[i]==s[i+1])ans1++;
      else{
        ans = max(ans1,ans);
        ans1=1;
      }
   }
   if(s[n-1]==s[n-2])ans=max(ans,ans1);
   cout<<ans<<" ";
   int ans2 = 1;
   for(int i = n-1;i>=0;i++){
       if(s[i]==s[i+1])ans2++;
   }
   while(k--){
     char x;
     cin>>x;
     if(x == s[s.length()-1]){
        ans2++;
        cout<<max(ans,ans2)<<" ";
     }
     else{
        ans2 = 1;
        cout<<ans<<" ";
     }
     
   }
    cout<<endl;
}
}
int main(){
Radhe();
return 0;
}