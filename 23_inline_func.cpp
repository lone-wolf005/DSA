//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// when size of code is one -two line use inline function 
// inline function works as macro replace the code in main function with defined function
// it is memory efficient
 int mmax(int& a, int& b){
    return (a>=b)?a:b;
}
int main(){
    int a =5;
    int b= 6;
    int ans=mmax(a,b);
    cout<<ans<<endl;
 
return 0;
}