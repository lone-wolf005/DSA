//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class A{
    public:
    string name;
    void show(){
        cout<<"I Don't Want to show anything"<<endl;
    }
};
class B{
  public:
  int id;
  void show(){
      cout<<"I want to show everything you want"<<endl;
  }
};
class C:public A,public B{
 public :
  C(string name,int id){
    this->id = id;
    this->name=name;
    
  }

};
int main(){
C rutherford("Rutherford",123321);
cout<<rutherford.name<<" "<<rutherford.id<<endl;
rutherford.A::show();
// to resolve imbiguity we have to put class_name::method()=====>remove imbiguity
}

