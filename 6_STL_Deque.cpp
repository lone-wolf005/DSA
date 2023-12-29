//Radhe Radhe
#include<bits/stdc++.h>
#include<iostream>
#include<deque>
using namespace std;
#define ll long long int
int main(){
deque<int>d;
d.push_back(1);
d.push_front(2);
d.push_back(3);
d.push_back(3);

// d.pop_back();
// d.pop_front();
cout<<d.front()<<endl;
cout<<d.back()<<endl;
cout<<d.size()<<endl;
d.erase(d.begin(),d.begin() + 1);
cout<<d.size()<<endl;


// cout<<d.at(1);
// for(auto x : d){
//     cout<<x<<" ";
// }
return 0;
}