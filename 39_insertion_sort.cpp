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
void insertion_sort(int*arr,int n){
    printarray(arr,n);
    if(n<=1)return;
    insertion_sort(arr,n-1);//reduce the size to 1 and then place perticular
    //element as it comes 
    int last = arr[n-1];
    int j = n-2;
    while(j>=0&&arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
}
int main(){
int arr[4]={3,2,1,4};
insertion_sort(arr,4);
printarray(arr,4);
return 0;
}