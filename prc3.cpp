#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void alternateSwap(int arr[], int size){
    for(int i=0;i<size;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int Unique(int arr[],int size){
    int brr[1000]={0};
    for(int i=0;i<size;i++){
        brr[arr[i]]++;
    }
    // for(int i)
    for(int i=0;i<1000;i++){
        if(brr[i]==1)return i;
        // cout<<brr[i];
    }
    return -1;
}
int main(){
int size;
cin>>size;
int arr[100];
for(int i=0;i<size;i++){
    cin>>arr[i];

}
// alternateSwap(arr,size);
// for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
// }
cout<<Unique(arr,size);
return 0;
}