//Radhe Radhe
#include<bits/stdc++.h>
int rowSum(int arr[][3],int row){
    int sum = 0;
    for(int j = 0; j < 3; j++){
        sum += arr[row][j];
    }

    return sum;

}
using namespace std;
#define ll long long int
int main(){
    int arr[3][3];
    for(int i = 0; i < 3; i++){
        for(int j =0; j < 3; j++){
            cin>>arr[i][j];
        }
    }
    int ans = -1;
    int oldSum = -1;

    for(int i =0; i < 3; i++){
       
       int sum= rowSum(arr,i);
       if(sum > oldSum){
        ans = i;
        oldSum = sum;
       }

       
       cout<<sum<<endl;   
    }
    cout<<ans<<endl;

return 0;
}