//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int partation(vector<int>&arr,int s,int e){
        int pivot = arr[s];
        int cnt = 0;
        // count the total number of element less than pivot element
        for(int i = s;i<=e;i++){
            if(arr[i]<pivot)cnt++;
        }
        int pivotIndex = s + cnt;
        swap(arr[s],arr[pivotIndex]);
        int i = s,j=e;
        while(i<pivotIndex && j>pivotIndex){
            while(arr[i]<pivot){
                i++;
            }
            while(arr[j]>pivot){
                j--;
            }
            swap(arr[i++],arr[j--]);
            }
        
    return pivotIndex;
}
void quick_sort(vector<int>&arr,int s,int e){
    if(s>=e)return;
    int p = partation(arr,s,e);
    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);
}
int main(){
    vector<int>arr={5,3,8,9,1,7,0};
    quick_sort(arr,0,4);
    for(auto x:arr)cout<<x<<" ";
    cout<<endl;

return 0;
}