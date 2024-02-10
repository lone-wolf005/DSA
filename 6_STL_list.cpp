//Radhe Radhe
#include<bits/stdc++.h>
#include<list>
using namespace std;
#define ll long long int
int main(){
    list<int>l;
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    for(auto x:l){
        cout<<x<<endl;
    }
    l.erase(l.begin());
    for(auto x:l){
        cout<<x<<endl;
    }
    cout<<l.size()<<endl;
return 0;
}