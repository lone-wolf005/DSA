//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Fighter{
  private:
  int skill_level;
  int rank;
  string clan;
  public:
  Fighter(int a,int b,string c){
    this->skill_level=a;
    this->rank=b;
    this->clan=c;
  }
  void getter(){
    cout<<this->rank<<" ";
    cout<<this->skill_level<<" ";
    cout<<this->clan<<endl;
  }
};
int main(){
  Fighter jigar(1,2,"Ninja");
  jigar.getter();

return 0;
}