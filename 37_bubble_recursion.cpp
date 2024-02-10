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
void bubble_sort(int * arr,int n){
    printarray(arr,n);
    if(n==1||n==0)return;
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);
}
int main(){
int arr[4]={3,2,1,4};
bubble_sort(arr,4);
printarray(arr,4);

return 0;
}