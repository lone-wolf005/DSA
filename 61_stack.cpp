//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Stack{
 public:
   int top;
   int size;
   int * arr;

   Stack(int size){
      this->size = size;
      arr = new int [size];
      top = -1;
   }
   bool isEmpty(){
      if(top == -1){
        return true;
      }
      return false;
   }
   void push(int x){
    if(size - top <=1){
        cout<<"Stack is overflowed"<<endl;
    }
    else {
        arr[++top] = x;
    }
   }
   void pop(){
    if(!isEmpty()){
        top--;
    }
    else{
        cout<<"Underflow mere dost"<<endl;
    }
   }
   int peek(){
     if(top == -1)return -1;
     else return arr[top];
   }
   void print(){
    while(top != -1){
        cout<<arr[top--]<<endl;
    }
   }
};
int main(){
    auto x = Stack(5);
    x.push(5);
    x.push(5);
    x.push(6);
    cout<<x.peek();
    x.pop();
    x.pop();
    x.pop();
    x.print();
    cout<<"Perfectly working"<<endl;

return 0;
}