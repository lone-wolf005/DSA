//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
          this->data = data;
          this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"destruction of data"<<value<<endl;
    } 
};
  void inserAtHead(Node * &head,Node * &tail,int data){
        //creating a node
        if(head==NULL){
            Node * temp = new Node(data);
            head = temp;
            tail = temp;
        }
       else{ Node * temp = new Node(data);
        temp ->next = head;
        head = temp; } 
    }
  void insertAtTail(Node * &tail,Node* &head,int data){
       if(tail == NULL){
        Node*temp = new Node (data);
        head =temp;
        tail = temp;
       }
        Node * temp = new Node(data);
        tail->next = temp;
        tail = temp;
  }
  void insertAtPosition(Node * &tail,Node * &head,int postion,int data){
       Node * temp = head;
       int cnt = 1;
       if(postion==1){
        inserAtHead(head,tail,data);
        return;
       }
       while(cnt < postion - 1){
        temp = temp->next;
        cnt++;
       }
       if(temp->next == NULL){
        insertAtTail(tail,head,data);
        return;
       }
       Node * nodex= new Node(data);
       nodex->next = temp->next;
       temp->next = nodex;
  }
  
  void deleteAtPosition(Node* &head,Node*&tail,int position){
      if(position==1){
        if(head==tail){
            Node * temp = head;
            head=NULL;
            tail = NULL;
            delete temp;
        }
            Node*temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
      }
      else{
         Node * current = head;
         Node * previous = NULL;
         int cnt = 1;
        while(cnt < position){
           previous=current;
           current= current->next;
           cnt++;
        }
        if(current->next == NULL){
            tail = previous;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
      }
    
  }
  void deleteByValue(Node* &head,Node*&tail,int value){
    int position = 1;
    Node*temp = head;
    // cout<<temp->data<<endl;
    
    while(temp->data !=value){
        temp=temp->next;
        position++;
    }
    cout<<position<<endl;

    deleteAtPosition(head,tail,position);
  }
    void print (Node* &head){
        Node * temp = head;
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
int main(){
    Node * node_1 = new Node(11);
    Node * head = node_1;
    Node * tail = head;
    
    inserAtHead(head,tail,12);
    print(head);
    // insertAtTail(tail,head,13);
    // print(head);
    // insertAtTail(tail,head,14);
    // print(head);
    // insertAtPosition(tail,head,2,44);
    // print(head);
    // deleteAtPosition(head,tail,1);
    // print(head);
    // deleteAtPosition(head,tail,4);
    // print(head);
    // deleteAtPosition(head,tail,4);
    print(head);
    deleteByValue(head,tail,12);
    print(head);
    cout<<head->data<<" "<<tail->data<<endl;
return 0;
}