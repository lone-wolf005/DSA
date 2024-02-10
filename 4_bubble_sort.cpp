//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void bubble_sort(int arr[],int n){
    int x=0;
    for(int i = 0; i < n - 1; i++){
        bool swapper = false;
        for(int j = 0; j< n - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapper = true;
            }
        }
        if(swapper == false)break;
    }
    for(int i = 0;i < n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 
}
int main(){
    int arr[6] = { 8,22,7,9,31,13};
    bubble_sort(arr,6);

return 0;
}