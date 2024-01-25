//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LIMIT 1000 
void fun2(int n) 
{ 
  if (n <= 0) 
     return; 
  if (n > LIMIT) 
    return; 
  cout << n <<" "; 
  fun2(2*n); 
  cout << n <<" "; 
} 
void fun1(int n)  
{  
   int i = 0;    
   if (n > 1)  
     fun1(n - 1);  
   for (i = 0; i < n; i++) { 
     cout << " * ";  }
     cout<<endl;
}  
void fun(int x) 
{ 
    if(x > 0) 
    { 
        fun(--x); 
        cout << x <<" "; 
        fun(--x); 
    } 
    return;
} 
int main(){
fun(4);
return 0;
}