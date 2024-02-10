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
    int i;
    vector<bool>a(26);
    vector<bool>b(26);
    for(i=0;i<n;i++){
        if(a[s[i]-'a'])break;
        else{
            a[s[i]-'a']=1;
        }
    }
    int ans = i;
    for(i;i<n;i++){
        if(b[s[i]-'a'])continue;
        else{
            ans++;
            b[s[i]-'a']=1;
        }
    }
    cout<<ans<<endl;
 }
}
int main(){
Radhe();
return 0;
}