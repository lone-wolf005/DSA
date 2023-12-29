//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int arr[5]={1,2,3,4,5};
// cout<<arr<<endl;
// cout<<&arr<<endl;
// cout<<*arr<<endl;
// cout<<*(arr+1)<<endl;
// cout<<*arr + 5 <<endl;

// content of symbol table can't be changed 
// arr = arr + 1;

int * ptr = arr + 1;//second element
// &ptr = (&ptr)+1;//error as we cant change address of data structure
ptr = ptr + 1;// third element
cout<<*ptr<<endl;

return 0;
}