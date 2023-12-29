//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class A{
    public :
    string name="jigar";
};

class B: public A{
    
};
class C: public A{

};
int main(){
    B x;
   cout<< x.name;
    C current;
    cout<<current.name;


return 0;
}