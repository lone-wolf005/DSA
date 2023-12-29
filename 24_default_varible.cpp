//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// agar hum aisa function banana chahate hai jisme agar me value supply karu to it will execute
// according to that otherwise use default variable
// make variable defult from right side to left side
void print(int arr[],int n,int start=0){
    for(int i = start;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// if we supply start then it will start from that otherwise start from 0
int main(){
    int arr[5]={1,2,3,4,5};
    print(arr,5,3);
    print(arr,5);
    

return 0;
}