//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int row,col;
cin>>row>>col;
//    int*arr =  new int [n];
//  creating array of pointer 
   int**arr = new int* [row];
   //pointing each pointer to 1D array to create 2D array
   for(int i = 0; i < row ;i++){
       arr[i] = new int[col]; 
   }
   for(int i = 0; i < row ;i++){
       for(int j = 0;j<col;j++){
            cin>>arr[i][j];
       }
   }
   for(int i = 0; i < row ;i++){
       for(int j = 0;j<col;j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
   //release memory
   for(int i= 0;i<row;i++){
        delete [] arr[i];
   }
   // delete pointer array
   delete [] arr;

return 0;
}