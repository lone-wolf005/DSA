#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 int arr[5] = {1,2,3,4,5};
    int start = 0;
    int end = 4;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(arr[0]<=arr[mid]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid = start + (end - start)/2;
    }
    cout<<start<<endl;
return 0;
}