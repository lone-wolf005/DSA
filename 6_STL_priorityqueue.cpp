//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
priority_queue<int>maxi;
priority_queue<int,vector<int>,greater<int>>mini;

maxi.push(1);
maxi.push(5);
maxi.push(3);
maxi.push(6);
while(!maxi.empty()){
    cout<<maxi.top()<<" ";
    maxi.pop();
}
return 0;
}