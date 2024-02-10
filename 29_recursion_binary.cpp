//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void printarray(int *arr,int s,int e){
    for(int i = s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int *arr,int s,int e,int key){
    printarray(arr,s,e);
    if(s>e)return false;
    int mid = s +(e-s)/2;
    if(arr[mid]==key)return true;
    if(arr[mid]<key)return binarySearch(arr,mid+1,e,key);
    else return binarySearch(arr,s,mid-1,key);
}
int main(){
int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
cout<<binarySearch(arr,0,10,222);
return 0;
}