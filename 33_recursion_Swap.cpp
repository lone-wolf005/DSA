//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void reverse(string &s ,int a,int b){
         if(a>=b)return;
         else{
            swap(s[a],s[b]);
            a++,b--;
            reverse(s,a,b);
         }
}
int main(){
    string s;
    cin>>s;
    reverse(s,0,s.length()-1);
    cout<<s<<endl;
    
return 0;
}