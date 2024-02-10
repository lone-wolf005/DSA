//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Node{
    public:
    Node*previous;
    int data;
    Node*next;
    Node(int data){
        this->previous=NULL;
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
      int value = this->data;
      if(next!=NULL){
         delete next;
         next = NULL;
      }
      cout<<"deleted"<<value<<endl;
    }
};
   void insertAtHead(Node* &head,Node* &tail,int data){
      if(head==NULL){
         Node * temp = new Node(data);
         head = temp;
         tail = temp;
      }
      else{
      Node * temp = new Node(data);
      temp->next = head;
      head->previous=temp;
      head = temp;}
   }
   void insertAtTail(Node* &tail,Node* &head,int data){
      if(tail==NULL){
         Node* temp = new Node(data);
         head=temp;
         tail=temp;
      }

      Node *temp = new Node(data); 
      tail->next = temp;
      temp->previous=tail;
      tail=temp;

   }
   void insertAtPosition(Node* &head,Node* &tail,int postion,int data){
       if(postion==1){
        insertAtHead(head,tail,data);
        return;
       }
       Node * temp = head;
       int cnt = 1;
       while(cnt < postion -1){
        temp = temp->next;
        cnt++;
       }
       if(temp->next == NULL){
        insertAtTail(tail,head,data);
        return;
       }
       Node * nodex= new Node(data);
       nodex->next = temp->next;
       temp->next->previous=nodex;
       temp->next = nodex;
       nodex->previous=temp;
  }
   void deleteAtPosition(Node* &head,Node*&tail,int position){
      if(position==1){
          if(head==tail){
            Node *temp = head;
            head = NULL;
            tail  = NULL;
            delete temp;
          }
         else{ 
             Node*temp = head;
            head = head->next;
            temp->next->previous = NULL;
            temp->next=NULL;
            delete temp;
            }
      }
      else{
         Node * current = head;
         Node * prev = NULL;
         int cnt = 1;
         while(cnt < position){
           prev=current;
           current= current->next;
           cnt++;
        }
        if(current->next == NULL){
            tail = prev;
            prev->next =NULL;
            current->previous=NULL;
            delete current;
        }
       else{prev->next = current->next;
        current->next->previous = prev;
        current->previous=NULL;
        current->next = NULL;
        delete current;
       }
      }
    
  }
   void print(Node* &head){
     Node*temp = head;
     while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
   }

int main(){

    Node * head = NULL;
    Node * tail = NULL;
    insertAtHead(head,tail,11);
    print(head);
    insertAtHead(head,tail,10);
   //  print(head);
    insertAtHead(head,tail,9);
    insertAtTail(tail,head,8);
    insertAtTail(tail,head,7);
    insertAtTail(tail,head,6);
    insertAtPosition(head,tail,3,69);
    insertAtPosition(head,tail,1,65);
    insertAtPosition(head,tail,5,111);
    print(head); 
    deleteAtPosition(head,tail,1);
    print(head); 
    cout<<head->data<<" "<<tail->data<<endl;
    deleteAtPosition(head,tail,8);
    print(head); 

    print(head);
    cout<<head->data<<" "<<tail->data<<endl;
    


return 0;
}