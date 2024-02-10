//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class A{
    public:
    int a;
};
class B:public A{

};
class C:public A{

};
int main(){
C rutherford;
rutherford.a=5;
cout<<rutherford.a<<endl;
return 0;
}