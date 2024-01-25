#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int setBits(int a,int b){
    int count=0;
    while(a||b){
        
        if(a&1){
           count++;
           a>>=1;
        }
        if(b&1){
            count++;
            b>>=1;
        }
       
    } 
    return count;

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<setBits(a,b)<<endl;

return 0;
}