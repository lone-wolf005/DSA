//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 set<int>s1;
 s1.insert(5);
 s1.insert(4);
 s1.insert(7);
 s1.insert(8);
 s1.insert(9);
 s1.insert(10);
 for(auto x :s1){
    cout<<x<<" ";
 }
 //show that element is present or not
 //boolean return 0 or 1
 cout<<s1.count(0)<<endl;

 set<int>::iterator it = s1.find(7);
 for(auto i=it;i!=s1.end();i++){
    cout<<*i<<" ";
 }
return 0;
}