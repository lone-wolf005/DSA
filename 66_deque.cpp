#include <bits/stdc++.h> 
class Deque
{
 int size;
 int front;
 int rear;
 int *arr;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        // Write your code here.
        arr = new int [n];
        size = n;
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if(isFull())return false;
        if(front == 0 && rear !=size-1){
            front = size-1;
        }
        else if(isEmpty()){
            front =0;
            rear = 0;
        }
        else front--;
        arr[front]=x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
       if(isFull())return false;
       if(isEmpty()){
           front =0;
           rear = 0;
       }
       else if(rear == size-1 && front !=0){
           rear = 0;
       }
       else rear++;
       arr[rear]=x;
       return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(isEmpty())return -1;
        int ans = arr[front];
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else front++;
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(isEmpty())return -1;
        int ans = arr[rear];
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else if (rear == 0){
            rear = size-1;
        }
        else rear --;
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(isEmpty())return -1;
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(isEmpty())return -1;
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
      return (front == -1);
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        return ((front ==0 && rear == size-1)||( front!=0 && rear == (front-1)%(size-1)) );
        
    }
};