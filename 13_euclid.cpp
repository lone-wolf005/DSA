//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a,  int b){
    if(a==0)
     return b;
     return gcd(b%a,a);
    }
int main(){
int a,b;
cin>>a>>b;
cout<<gcd(a,b)<<endl;
cout<<__gcd(a,b)<<endl;
return 0;
}