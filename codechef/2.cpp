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
     vector<int>v1(n);
     for(int i=0;i<n;i++)cin>>v1[i];
     vector<int>temp = v1;
     sort(temp.begin(),temp.end());
     if(n==2 && temp == v1)cout<<"YES"<<endl;
     else if(n==3 && temp[1]==v1[1])cout<<"YES"<<endl;
     else if(n>=4)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
 }
}
int main(){
Radhe();
return 0;
}