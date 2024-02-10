//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isValid(string s){
    if(s[0]>='a'&&s[0]<='m'){
        for(auto x:s){
            if(x >='a' && x<='m')continue;
            return false;
        }
        return true;
    }
    if(s[0]>='N'&&s[0]<='Z'){
        for(auto x:s){
            if(x >='N' && x<='Z')continue;
            return false;
        }
        return true;
    }
    return false;

}
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     int k;
     cin>>k;
     vector<string>st;
     for(int i=0;i<k;i++){
        string x;
        cin>>x;
        st.push_back(x);
     }
     bool y = true;
     for(auto x:st){
         if(isValid(x))continue;
         else {y=false;break;}
     }
     y?cout<<"YES":cout<<"NO";
     cout<<endl;
 }
}
int main(){
Radhe();
return 0;
}