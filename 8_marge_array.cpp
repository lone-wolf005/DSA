//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void marge(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i < n){
        arr3[k++] = arr1[i++];
    }
    while(j < m){
        arr3[k++] = arr1[i++];
    }
}
int main(){
    int arr[5]={1,3,5,7,9};
    int brr[5]={0,2,4,6,8};
    int crr[10]={0};
    marge(arr,5,brr,5,crr);
    for(int i = 0 ;i<10;i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
  
return 0;
}