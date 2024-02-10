//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void rearrange(int * arr ,int n ){
    int low = 0;
    int high = n-1;
    while(low <=high){
        if(arr[low]<0){
            swap(arr[low],arr[high]);
                high--;
                low++;
            }
        else low++;
        }
    }

int main(){
  int arr[5]={0,-1,-1,5,3};
  rearrange(arr,5);
  for(int i = 0;i<5;i++)cout<<arr[i]<<" ";
return 0;
}