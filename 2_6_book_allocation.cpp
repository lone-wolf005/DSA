#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPossible(int arr[],int n,int m,int mid){
    int StudentCount = 1;
    int PageSum = 0;
    for(int i = 0; i < n; i++){
       if( PageSum + arr[i] <= mid){
        PageSum += arr[i];
       }
       else{
           StudentCount++;
           if(StudentCount > m || arr[i] > mid){
             return false;
           }
           PageSum = arr[i];
       }
    }
    return true;
}
int binary_book(int arr[],int n, int m){
    int start = 0;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while( start <= end){
         if(isPossible(arr,n,m,mid)){
            ans=mid;
            end = mid - 1;
         }
         else{
            start = mid + 1;
         }
        mid = start + (end - start) / 2;
    }
    return ans;

}
int main(){
    int arr[4]={10,20,30,40};
    // not necessary to be in accending order
    cout<<binary_book(arr,4,2);

return 0;
}
