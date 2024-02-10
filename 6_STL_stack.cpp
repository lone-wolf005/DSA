//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 stack<string>s;
 s.push("Jigar");
 s.push("Thakor");
 s.push("Koita");
 cout<<s.size()<<endl;
 while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
 }
return 0;
}