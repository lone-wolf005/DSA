//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){

 
     string s;
     cin>>s;
     int ans =1;
     int ans1 = 1;
     for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            ans1++;
            ans = max(ans,ans1);
        }
        else{
            ans1=1;
        }
     }
     cout<<ans<<endl;

 
}
int main(){
Radhe();
return 0;
}