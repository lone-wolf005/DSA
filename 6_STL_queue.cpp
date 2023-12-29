//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
queue<int>q;
q.push(1);
q.push(2);
q.push(3);
q.push(1);
while(!q.empty()){
    cout<<q.front()<<" "; 
    q.pop();
}
return 0;
}