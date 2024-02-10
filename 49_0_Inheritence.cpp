//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Human{
    public:
    int Height;
    protected:
    int age;
    private:
    string color;

};
class Male:protected Human{
      public:
      void get_height(){
        cout<<this->Height<<endl;
      }  
    };
int main(){
    // 1.public   //base class
        //    mode      actual behavior 
        //  1.public --->public
        //  2.protected--->protected
        //  3.private----->private
    // 2.protected // base class
        //    mode      actual behavior 
        //  1.public --->protected
        //  2.protected--->protected
        //  3.private----->private
    // 2.private // base class
        //    mode      actual behavior 
        //    NO ---___----

    Male jigar;
    jigar.get_height();

return 0;
}