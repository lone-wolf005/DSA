//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
void fun2(int n)
{
if(n == 0)
    return;
 
fun2(n/2);
cout << n%2 << endl;
}
int main(){
fun2(8);
return 0;
}