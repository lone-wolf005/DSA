//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void update(int *p){
    p = p + 1;
    // address in main does not changed
    // because of pass by value of address 
    // change in only in update function scope
}
void update2(int *p){
    *p = *p + 1;
    // value changed in main because we changed value at that given address
    
}
int arraySum(int *arr,int size){
    int sum  = 0;
    for(int i =0; i < size ; i++){
        sum += arr[i];//*(arr+i);
        sum+=i[arr];//also use this 
        // cout<<arr[i]<<" ";
    }
    return sum;

}
int main(){
    // int a = 3;
    // int *ptr = &a;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // update(ptr);
    // update2(ptr);
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    int arr[5]={1,2,3,4,5};
    int sum = arraySum(arr+2,5-2);
    cout<<sum<<endl;
    


return 0;
}