//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
char arr[6]="jigar";
// cout<<sizeof(arr)<<endl;
char*p=&arr[0];
cout<<*p<<endl;
cout<<p<<endl;//print util the null character encounter


char x = 'z';
char*y=&x;
cout<<y;//print until the null character encounter

return 0;
}