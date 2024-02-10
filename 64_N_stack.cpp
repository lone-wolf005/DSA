#include <bits/stdc++.h> 
class NStack
{
public:
    int * arr;
    int * next;
    int * top;
    int n,s;
    int pos;
    // Initialize your data structure.
    NStack(int N, int S)
    {
        this->n=N;
        this->s=S;
        arr = new int [s];
        top = new int [n];
        next = new int [s];
        pos = 0;
        for(int i =0;i<n;i++)top[i]=-1;
        for(int i =0;i<s;i++)next[i]=i+1;
        next[s-1]=-1;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
       if(pos == -1)return false;
       int index = pos;
       arr[index]=x;
       pos = next[index];
       next[index]=top[m-1];
    //    pos = next[pos];
       top[m-1]=index;
       return true;

       
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
       if(top[m-1]== -1)return -1;
       int index = top[m-1];
       top[m-1]=next[index];
       next[index] = pos;
       pos = index;
       return arr[index];
    }
};