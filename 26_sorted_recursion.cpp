//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isSorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1])return false;
    else{
      return isSorted(arr+1,size-1);
    }
}
int main(){

return 0;
}
// input array output sum of array using recursion