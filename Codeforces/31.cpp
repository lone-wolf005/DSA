//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long int
int main(){
int n;
cin>>n;
string s;
cin>>s;
char maxi = s[0];
int max_ind = 1;
bool is_possible = false;
for(int i=1;i<n;i++){
   if(s[i]<maxi){
    cout<<"YES"<<endl;
    cout<<max_ind<<" "<<i+1<<endl;
    is_possible = true;
    break;
   }
   else if(s[i]>maxi){
    maxi = s[i];
    max_ind=i+1;
   }
}
if(!is_possible)cout<<"NO"<<endl;

return 0;
}