#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int pivot(int arr[],int size){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start )/2;
    while( start < end ){
        if(arr[0] < arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start )/2;
    }
    return start;
    // You can also return end 
}
int rotated_search(int arr[], int size, int key){
    int piv = pivot(arr,size);
    // if(arr[piv] == key)return piv;
    if(key >= arr[piv] && key <= arr[size-1]){
        int start = piv;
        int end = size -1;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
            if(key == arr[mid])return mid;
            else if(key > arr[mid]){
               start = mid + 1;
            }
            else{
               end = mid -1 ;
            }
            mid = start + (end - start) / 2;
        }
       return -1; 
    }
   else{
     int start = 0;
    int end = piv -1;
    int mid = start + (end-start) / 2;
    while (start <= end )
    {
        if(key == arr[mid])return mid;
            else if(key > arr[mid]){
               start = mid + 1;
            }
            else{
               end = mid -1 ;
            }
       mid = start + (end - start) / 2;
    }
    return -1;
   }
    
}
int main(){
     int arr[5] = {5,7,1,2,3};
     cout<<pivot(arr,5)<<endl;
     cout<<rotated_search(arr,5,3);


return 0;
}