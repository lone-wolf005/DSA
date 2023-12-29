//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class kQueue{
    public:
    int n;
    int k;
    int *front ;
    int *rear;
    int *arr;
    int freeSpot;
    int *next;
    kQueue(int n,int k){
     this->n=n;
     this->k=k;
     front = new int [k];
     next = new int [k];
     for(int i=0;i<n;i++){
        front[i]=-1;
        rear[i]=-1;
     }
     next = new int[n];
     for(int i=0;i<n;i++){
        next[i]=i+1;
     }
     next[n-1]=-1;
     arr = new int [n];
     freeSpot = 0;
    }
    void push(int qn,int x){
        if(freeSpot == -1){
            cout<<"No space is present";
            return;
        }
        int index = freeSpot;
        freeSpot=next[index];

        if(front[qn-1]==-1){
            front[qn-1]=index;
        }
        else{
            next[rear[qn-1]]=index;
        }
        next[index]=-1;
        rear[qn-1] = index;
        arr[index] = x;
    }
    int deque(int qn){
        if(front[qn-1]==-1){
            cout<<"Underflow";
            return -1;
        }
        int index = front[qn - 1];
        // upadate the front of current queue
        front[qn-1]=next[index];
    //   freeslot ko manage karo
        next[index]=freeSpot;
        freeSpot = index;
        return arr[index];
    }

};
int main(){

return 0;
}