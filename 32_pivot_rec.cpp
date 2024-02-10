//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void print(int v1[],int s,int e){
    for(int i =s;i<=e;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int pivot(int arr[],int s,int e){
    print(arr,s,e);
    if(s>=e){
        return arr[s];
    }
    int mid = s + (e-s)/2;
     if(arr[0]<arr[mid])
       return pivot(arr,mid+1,e);
     else
       return pivot(arr,s,mid);
}
int main(){
    int arr[5]={4,5,1,2,3};
    cout<<pivot(arr,0,4);

return 0;
}