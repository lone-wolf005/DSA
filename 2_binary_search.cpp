#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int binary_search(int key,int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    //do this because usual method leads to int overflow
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int key;
    cin>>key;
    int arr[7]={1,2,3,4,5,6,7};
    cout<<binary_search(key,arr,7);


return 0;
}