//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void update(int**p){

   
    // p = p + 1;  //no change

    //  *p = *p +1 ;//content of p is change
    
    **p = **p +1;//content of a is change 
}
int main(){
 int a = 10;
 int *p = &a;
 int **ptr= &p;
//  printing the content of a
// cout<<a<<endl;
// cout<<*p<<endl;
// cout<<**ptr<<endl;
// //  printing the address of a
// cout<<&a<<endl;
// cout<<p<<endl;
// cout<<*ptr<<endl;

// printing content before update
cout<<a<<endl;
cout<<p<<endl; 
cout<<ptr<<endl;
update(ptr);
// printing the content after the function
cout<<a<<endl;
cout<<p<<endl; 
cout<<ptr<<endl;


return 0;
}