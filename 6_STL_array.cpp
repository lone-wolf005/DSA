//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
array<int,4>a={1,2,3,4};
cout<<a.size()<<endl;
cout<<a.front()<<endl;
cout<<a.back()<<endl;
cout<<a.empty()<<endl;
for(auto x: a){
    cout<<x<<" ";
}
return 0;
}