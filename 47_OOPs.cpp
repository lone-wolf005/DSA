//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Fighter{
    // string name;
    public:
    int level;
    char * name;
    static int TOC;
    Fighter(){
        name = new char[100];
    }
    Fighter(char* nam , int level){
        // cout<<this<<endl;
        name = new char[100];
        this->name = nam ;
        this->level=level;
    }
    //COPY CONSTRUCTOR
    // pass only reference not copy
    Fighter(Fighter &temp){
        char * ch = new char[20];
        strcpy(ch,temp.name);
        this->name=ch;
        this->level=temp.level;
    }
    void setter(char*name,int level){
        this->name = name;
        this->level = level;
    }
    void getter(){
        cout<<name<<endl;
        cout<<level<<endl;
    }
    static int random(){
        return TOC;
    }
    ~Fighter(){
        cout<<"Destructor called"<<endl;
    }
};
 
 int Fighter::TOC=5;//initalisation of static variable


int main(){

 

  /* 
    //statically object creation

    Fighter jigar;
    jigar.setter("jigar",100);
    jigar.getter();

    // dynamically object creation

    Fighter * ramesh = new Fighter;
    ramesh->setter("Ramesh",84);
     ramesh->getter();
     
 */ 
    // THIS KEYWORD
 
    // this keyword is pointer to the current object
    //  Fighter jigar("jigar",28);
    //  Fighter jigar = Fighter("jigar",28);
    //  jigar.getter();
    //  Fighter jigar("jigar",28);
    //  Fighter * ramesh = new Fighter("ramesh",22);

    // COPY CONSTRUCTOR
  
    // 1.Default copy-constructor
    //   Fighter jigar;
    //   jigar.setter("jigar",23);
    //   Fighter mahesh(jigar);
    //   jigar.getter();
    //   mahesh.getter();

    // 2.User defined copy constructor
     
     // Note:you should have to pass reference of object otherwise
    //  it makes copy , and for copy it calls copy constructor which lead to infinite looping
    //  char name[6] ={"jigar"};
    //  Fighter jigar(name,21);
    //  Fighter mahesh(jigar);
    //  jigar.name[0]='B';
    //  mahesh.getter();
     

    // DEEP AND SHALLOW COPY 

    // SHALLOW COPY IS DEFAULT IN (DEFAULT)COPY CONSTRUCTOR
    // FOR DEEP COPY YOU SHOULD HAVE TO CREATE YOUR COPY CONSTRUCTOR

    // SHALLOW COPY
    // HERE COPY CONSTRUCTO USED WHICH MAKES A SHALLOW COPY OF NAME 
    //  char name[6] ={"jigar"};
    //  Fighter jigar(name,21);
    //  Fighter mahesh(jigar);
    //  jigar.name[0]='B';
    //  mahesh.getter();  //Bigar and 21 changed in mahesh object

     // DEEP COPY
    //    char name[6] ={"jigar"};
    //  Fighter jigar(name,21);
    //  Fighter mahesh(jigar);
    //  jigar.name[0]='B';
    //  mahesh.getter();//jigar and 21

    // ASSIGNMENT OPERATOR
    //   char name[6] ={"jigar"};
    //   Fighter jigar(name,23);
    //   Fighter mahesh=jigar;
    //   mahesh.getter();

    // DESTRUCTOR 
    // 1.for static object destructo called automatically when scope is over
    //   Fighter jigar;
      
    // 2.for dynamic object we have to manually destroy the objects

    //   Fighter * mahesh = new Fighter;
    //   delete mahesh; 

    // static 
     cout<<Fighter::TOC<<endl;
     cout<<Fighter::random()<<endl;  
      
return 0;
}