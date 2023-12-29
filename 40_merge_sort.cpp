//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void printarray(int*arr,int s,int e){
    for(int i =s;i<e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int *arr,int s,int e){
    int mid = (s+e) / 2;
    int len1= mid-s +1;
    int len2 = e-mid;
    int *a1 = new int[len1];
    int *a2 = new int[len2];
    int k = s;
    // copy two arrays
    for(int i = 0;i<len1;i++){
        a1[i]=arr[k++];
    }
    k = mid + 1;
    for(int i =0;i<len2;i++){
        a2[i]=arr[k++];
    }
    int index1 = 0;
    int index2 = 0;
    k=s;
    // merge
    while(index1<len1&&index2<len2){
        if(a1[index1]<a2[index2]){
            arr[k++]=a1[index1++];
        }
        else{
            arr[k++]=a2[index2++];
        }
    }
    while(index1<len1){
        arr[k++]=a1[index1++];
    }
    while(index1<len1){
        arr[k++]=a2[index2++];
    }
    delete []a1;
    delete []a2;
}
void merge_sort(int *arr,int s,int e){
      if(s>=e){
               return; }
    
    int mid = s+(e-s)/2;
    merge_sort(arr,s,mid);
 
    merge_sort(arr,mid+1,e);
    // last call to 1 element array then continuously sorted arrays are created.
    merge(arr,s,e);
    //merging two sorted arrays
}
int main(){
    int arr[4]={3,2,1,4};
merge_sort(arr,0,4);
printarray(arr,0,4);

return 0;
}