//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int score = 6;
void a(){
    cout<<score;
    score++;
}
void bitt(int& b){
    cout<<endl;
    cout<<b<<endl;
}
// do not use global variable for sharing the variable in different function
// use the concept of reference variable to share the variable in different blocks
// shown a() uses concept of gv and b( ) uses reference variable concept
int main(){
    a();
    cout<<endl;
    cout<<score;
    int b = 12;
    bitt(b);


return 0;
}