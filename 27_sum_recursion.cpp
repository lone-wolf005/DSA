//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int sum(int*arr,int n){
    if(n==0)return 0;
    if(n==1)return arr[0];
    int rem = sum(arr+1,n-1);//calls until the size tends to zero
    int ans = arr[0]+rem;
    return ans;

}
int main(){
int arr[5]={1,2,3,4,5};
cout<<sum(arr,5)<<endl;
return 0;
}