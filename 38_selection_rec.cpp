//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void printarray(int*arr,int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selection_sort(int *arr,int n){
    printarray(arr,n);
    if(n==0||n==1)return;

    int min_index = 0;
    // cout<<arr[0]<<endl;
    for(int i =1;i<n;i++){
        
        if(arr[i]<arr[min_index]){
           // swap(arr[i],arr[min_index]);
           min_index=i;
        } 
    }
    swap(arr[0],arr[min_index]);
    selection_sort(arr+1,n-1);
    
}
int main(){
    int arr[4]={3,2,1,4};
selection_sort(arr,4);
printarray(arr,4);

return 0;
}