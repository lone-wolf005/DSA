// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// int size;
// cin>>size;
// int arr[size];
// for(int i=0;i<size;i++){
//     cin>>arr[i];
// }
// sort(arr,arr+size);
// int ans;
// bool x=false;
// for(int i=0;i<size-1;i++){
//     if(arr[i]!=arr[i+1]){
//         ans=arr[i];
//         x=true;
//         break;
//     }
//     else{
//         i++;
//     }

// }
//     x?cout<<ans:cout<<arr[size-1];
//     cout<<endl;

// return 0;
// }
class Solution
{
    bool is_decresing(vector<int> nums)
    {
        bool is_increasing = true;
        bool is_decreasing = true;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (is_decreasing)
            {
                if (nums[i] < nums[i + 1])
                {
                    is_decreasing = false;
                }
            }
            if (is_increasing)
            {
                if (nums[i] > nums[i + 1])
                {
                    is_increasing = false;
                }
            }
            if ((!is_increasing) && (!is_decreasing))
                return false;
        }
        return (is_decreasing || is_increasing);
    }
    // bool is_incresing(vector<int>nums){
    //     int n = nums.size();
    //     for(int i =0;i<n-1;i++){
    //           if(nums[i]>nums[i+1]){
    //               return false;
    //           }
    //     }
    //     return true;
    // }
public:
    bool isMonotonic(vector<int> &nums)
    {
        return (is_decresing(nums));
    }
};