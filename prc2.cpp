#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int fibanacci(int n){
    int n1=0;
    int n2=1;
    int ans;
    if(n==1)return n1;
    if(n==2)return n2;
    
    else{
        for(int i=3;i<=n;i++){
            ans=n1+n2;
            n1=n2;
            n2=ans;
        }
    }
    return ans;

}
int main(){
int n;
cin>>n;
cout<<fibanacci(n)<<endl;
return 0;
}