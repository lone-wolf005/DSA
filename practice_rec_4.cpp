//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


#include <iostream>
using namespace std;
  
int fun(int a[],int n)
{
  int x;
  if(n == 1)
    return a[0];
  else
    x = fun(a, n - 1);
  if(x > a[n - 1])
    return x;
  else
    return a[n - 1];
}
 
int main()
{
  int arr[] = {12, 10, 30, 50, 100};
  cout << " " << fun(arr, 5) <<" ";
  getchar();
  return 0;
}
int main(){

return 0;
}