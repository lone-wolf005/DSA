//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPossible(vector<int>&arr,int n,int m,int mid){
    int cowCount = 1;
    int lastPos = arr[0];
    for(int i = 0; i<n ;i++){
        if(arr[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == m){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}
int cow_allcation(vector<int>&arr,int n,int m){
      int s = 0;
      int  maxi = -1 ;
      sort(arr.begin(),arr.end());
      for(auto x : arr){
        maxi = max(maxi, x);
      }
      int e = maxi;
      int mid = s + (e - s) / 2;
      int ans = -1;
      while(s <= e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
      }
   return ans;
}
int main(){
    // n size of vector m is no. of cows and arr is position vector of stall
    vector<int>v1={1,2,3,4,6};
    cout<<cow_allcation(v1,5,2);

return 0;
}