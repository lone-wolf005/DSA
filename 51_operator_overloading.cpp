//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Complex{
    private:
    int real;
    int imaginary;
    public:
    Complex(){}
    Complex(int a,int b){
        real=a;
        imaginary=b;
    }
    Complex operator+(Complex &b){
        Complex a;
        a.real = this->real + b.real;
        a.imaginary = this->imaginary+b.imaginary;
        return a;
    }
    void operator()(){
       cout<<"I'm Bracket"<<endl;
    }
    void print(){
        cout<<this->real<<" + "<<this->imaginary<<"i"<<endl;
    }
};
int main(){
    Complex x(1,2);
    Complex y(3,5);
    Complex z = x+y;
    z();
    z.print();
     
    

return 0;
}