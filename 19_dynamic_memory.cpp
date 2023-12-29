//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
// when we create a varible simply without use of new key word it store in stack memory during compile time
// when we create a varible using new keyword it return the address of memory of heap memory (run -time allocation ).
// we have to use this address by using the pointer varible

 int *p = new int;
 //allocate memory in heap memory
 // *p is static variable so it stores in stack memory
 *p=5;
 cout<<*p<<endl;

 //creating array during run time
 int n;
 cin>>n;
 int * arr = new int[n];
 // total memory = n*4 + 8 ===>address has 
 for(int i = 0;i<n;i++){
    cin>>arr[i];
 }
 for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
 }

return 0;
}