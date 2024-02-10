//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll a,b;
cin>>a>>b;
int t;
cin>>t;
switch (t)
{
case 1:
    cout<<a+b<<endl;
    break;
case 2:
    cout<<a*b<<endl;
    break;
case 3:
    cout<<a/b<<endl;
    break;
case 4:
    cout<<a-b<<endl;
    break;
case 5:
    cout<<a%b<<endl;
    break;
}
return 0;
}