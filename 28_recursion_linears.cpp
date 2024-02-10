//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int linearSearch(int* arr,int size,int key,int ans){
    if(size==0)return -1;
    if(arr[0]==key)return ans;
    return linearSearch(arr+1,size-1,key,++ans);
}
int main(){
    int arr[5]={1,2,34,5,7};
  cout<< linearSearch(arr,5,34,0);

return 0;
}