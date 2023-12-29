//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
map<int,set<int>>m1;
int arr[5]={30,23,24,33,45};
for(int i = 0;i<5;i++){
    int x = arr[i]/10;
    m1[x].insert(arr[i]);
}
for(auto x:m1){
    for(auto y:x.second){
        cout<<y<<endl;
    }
}
return 0;
}