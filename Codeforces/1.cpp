//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int n;
cin>>n;
while(n--){
string s;
cin>>s;
int one = 0;
int zero = 0;
for(auto x:s){
    if(x=='1')one++;
    else zero++;
}
int ans = 0;
for(int i =0;i<s.length();i++){
      if(s[i]=='1'&& zero>0){
        zero--;
      }
      else if(s[i]=='0'&& one>0){
        one--;
      }
      else{
        ans = s.length()-i;
        break;
      }
      
}
cout<<ans<<endl;

}

return 0;
}