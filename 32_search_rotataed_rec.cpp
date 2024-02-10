//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int binarySearch(int *arr,int s,int e,int key){
    // printarray(arr,s,e);
    if(s>e)return -1;
    int mid = s +(e-s)/2;
    if(arr[mid]==key)return mid;
    if(arr[mid]<key)return binarySearch(arr,mid+1,e,key);
    else return binarySearch(arr,s,mid-1,key);
}
int pivot(int arr[],int s,int e){
    // print(arr,s,e);
    if(s>=e){
        return s;
    }
    int mid = s + (e-s)/2;
     if(arr[0]<arr[mid])
       return pivot(arr,mid+1,e);
     else
       return pivot(arr,s,mid);
}

int main(){

    int a[5]={4,5,1,2,3};
    int x =pivot(a,0,4);
    int target;
    cin>>target;
    cout<<x<<endl;
    if(target>a[4]){
       cout<<binarySearch(a,0,x-1,target);
    }
   else{
       cout<<binarySearch(a,x,4,target);
    }
return 0;
}