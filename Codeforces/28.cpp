//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     stack<char>st;
    for(int i=0;i<n;i++){
        if(st.empty())st.push(s[i]);
        // if(s[i]=='(')st.push(s[i]);
        else if(s[i]==')'&& st.top()=='(')st.pop();
        else st.push(s[i]);
    }
    cout<<st.size()/2<<endl;

 }
}
int main(){
Radhe();
return 0;
}