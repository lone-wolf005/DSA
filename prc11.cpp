//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 int t;
 cin>>t;
 while(t--){
    string s;
    cin>>s;
    stack<int>A;
    stack<int>B;
    vector<int>v1;
    for(int i = 0;i<s.length();i++){
        if(s[i]=='B'){
           if(!A.empty()){
              int x = A.top();
              A.pop();
              v1.push_back(x);
           }
        }
        else if(s[i]=='b'){
            if(!B.empty()){
              int x = B.top();
              B.pop();
              v1.push_back(x);
           }

        }
        else if(s[i]>='A'&& s[i]<='Z'){
                A.push(i);
        }
        else {
            B.push(i);
        }
    }
    sort(v1.begin(),v1.end());
    int j = 0;
    int x = v1[j];
    string ans="";
    for(int i =0;i<s.length();i++){
        if(s[i]=='B'||s[i]=='b')continue;
        else if(i==x){
           j++;
           x=v1[j];
           continue;
        }
        else ans+=s[i];
    }
    if(ans.length()>0)cout<<ans<<endl;
    else cout<<endl;
 }
return 0;
}