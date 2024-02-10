//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int search(vector<int>&nums){
    int n = nums.size();
    int s = 0;
    int e = n -1;
    int mid =  s + (e - s) / 2;
    if(num[0]<=target){
        while(s <= e){
            if(nums[mid] == target)return mid;
            else if(nums[mid] < nums[0]){
                e = mid - 1;
            }
            else{
               if(target > nums[mid]){
                  s = mid +1;
               }
               else{
                   e= mid - 1;
               }
            }
            mid = s + (e - s) / 2;

        }
        return -1;

    }
    else{
        while(s <= e){
            if(nums[mid] == target)return mid;
            else if(nums[mid] >= nums[0]){
                s = mid + 1;
            }
            else{
               if(target > nums[mid]){
                  s = mid +1;
               }
               else{
                   e= mid - 1;
               }
            }
            mid = s + (e - s) / 2;
        }
        return -1;

    }

}
int main(){

return 0;
}