//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPalindrom(string s,int a){
    int n = s.size();
    if((n-a-1)<a){
        return true;
    }
    if(s[n-a-1]!=s[a])return false;
    
    return isPalindrom(s,a+1);
    
}
int main(){
    string s;
    cin>>s;
    isPalindrom(s,0)?cout<<"YES":cout<<"NO";
    cout<<endl;

return 0;
}