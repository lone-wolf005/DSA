//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class heap{
   public:
   int arr[100];
   int size ;
   heap(){
    size = 0;
    arr[0]=-1;
   }

   void insert(int ele){
       size++;
       arr[size]=ele;
       int index = size;
       while(index > 1){
        int parentIdx = index/2;
        if(arr[parentIdx] < arr[index]){
            swap(arr[parentIdx],arr[index]);
          index = parentIdx;
  
          
        }
        return;
       }
   }
   void deleteHeap(){
    if(size == 0)return;
    int i= 1;
    arr[1]=arr[size];
    size--;
    while(i < size){
         int left = 2*i;
         int right = 2*i + 1;
         int max_index = 0;
         if(left <=size){
            max_index = left;
         }
         if(right <=size && arr[max_index]<arr[right]){
            max_index = right;
         }
         if(max_index && arr[max_index]>arr[i]){
            swap(arr[max_index],arr[i]);
            i = max_index;
         }
         else {
            return;
         }
    }
   }
   void printHeap(){
     for(int i = 1; i <=size ;i++){
        cout<<arr[i]<<" ";
     }cout<<endl;
   }
};

// _______ most_important__________

void heapify(int *arr,int n,int i){
     int largest = i;
     int right = 2*i + 1;
     int left = 2*i;
     if(left <=n && arr[largest]<arr[left]){
        largest = left;
     }
     if(right <=n && arr[largest]<arr[right]){
        largest = right;
     } 
     if(largest !=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
     }
     else return;
    
}

// ____heap___sort____________

void heapSort(int * arr,int size){
     while(size > 1){
      swap(arr[1],arr[size]);
      size--;
      heapify(arr,size,1);
     }

}
int main(){
    heap heap1;
    heap1.insert(55);
    heap1.insert(51);
    heap1.insert(52);
    heap1.insert(50);
    heap1.deleteHeap();
    heap1.printHeap();
    heap1.deleteHeap();
    heap1.printHeap();

    // construction heap using heapify 

    int arr[6] = {-1,55,44,59,92,89};
    int n = 5;
    // as n/2 + 1 to n is leaf node so we do not process them to build heap

    for(int i = n/2;i>0;i--){
        heapify(arr,n,i);
    }
    // heap_sort
    heapSort(arr,n);

    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

   // _______max_heap using stl_________________
    priority_queue<int>pq;
    pq.push(1);
    pq.push(5);
    pq.push(7);
    pq.push(9); 
    pq.pop();
    

   //  for(auto x:pq)cout<<x<<" ";
   cout<<pq.top()<<endl;

   // __________MIN-HEAP USING STL_______________
   priority_queue<int,vector<int>,greater<int>>minheap;
   minheap.push(3);
   minheap.push(6);
   minheap.push(9); 

   cout<<minheap.top()<<endl;

return 0;
}