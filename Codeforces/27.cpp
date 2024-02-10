//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 int n;cin>>n;
 int sum=1;
 for(int i=2;i<9;i++){

 }
 int ans = max(n%sum,sum-(n%sum));
 cout<<n+ans<<endl;

return 0;
}