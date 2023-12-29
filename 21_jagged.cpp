//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int row;
cin>>row;
int ** arr = new int*[row];
int *size = new int[row];
for(int i = 0;i<row;i++){
    int col;
    cin>>col;
    size[i]=col;
    arr[i]=new int[col];
}
for(int i = 0;i<row;i++){
    for(int j = 0;j<size[i];j++){
        cin>>arr[i][j];
    }
}
for(int i = 0;i<row;i++){
    for(int j = 0;j<size[i];j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}