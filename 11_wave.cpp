//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
void wavePrint(int arr[][2],int n,int m){
    int row_index = 0;
    for(int i = 0 ; i < m; i++){
        
        if(row_index==0){
            for(int j = 0; j < n ; j++){
                cout<<arr[j][i];
                row_index++;
            }
        }
        else{
             for(int j = row_index - 1 ; j >=0 ; j--){
                cout<<arr[j][i];
                row_index--;
            }
        }
    }
}
#define ll long long int
int main(){
    int arr[2][2]={{1,2},{3,4}};
    // wavePrint(arr,2,2);
        int row_index = 0;
        int n = 2;
        int m = 2;
    for(int i = 0 ; i < m; i++){
        
        if(row_index==0){
            for(int j = 0; j < n ; j++){
                cout<<arr[j][i];
                row_index++;
            }
        }
        else{
             for(int j = row_index - 1 ; j >=0 ; j--){
                cout<<arr[j][i];
                row_index--;
            }
        }
    }

return 0;
}