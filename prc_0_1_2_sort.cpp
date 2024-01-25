//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int arr[11] = { 0,1,2,2,2,0,0,0,0,1,2};
int low = 0;
int high = 10;
int curr = 0;
 for(int i=0;i<11 && i<=high;){
        // current element is 0
        if(arr[i]==0){
            swap(arr[low],arr[i]);
            low++;
            i++;
        }
        // current element is 2
        else if(arr[i]==2){
            swap(arr[i],arr[high]);
            high--;
        }
        // current element is 1
        else{
            i++;
        }
    }
for(int i =0;i<11;i++){
    cout<<arr[i]<<" ";
}
return 0;
}