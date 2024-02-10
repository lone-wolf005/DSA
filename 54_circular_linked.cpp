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
        cout<<" Deleted "<<value<<endl;
    }   
};
void insert(Node * &tail,int element ,int value){
        if(tail == NULL){
            Node * temp = new Node(value);
            tail = temp;
            temp->next = temp;
        }
        else{
            Node * curr = tail;
            while(curr->data != element){
                curr = curr->next;
            }
            Node * temp = new Node(value);
            temp->next = curr->next;
            curr->next = temp;
        }
}
void deleteNode(Node* &tail,int element){
    if(tail == NULL){
        cout<<" Empty list "<<endl;
        return;
    }
    else if(tail->next == tail){
        Node * temp = tail;
        tail=NULL;
        temp->next=NULL;
        delete temp;
        
        return;
    }
    else{
        Node * pre = tail;
        Node * curr = pre->next;
        while(curr->data != element){
            pre=curr;
            curr= curr->next;
        }
        pre->next= curr->next;
        if(tail == curr){
            tail=pre;
        }
        curr->next=NULL;
        delete curr;
    }
}
void print(Node * tail){
      Node * temp = tail;
      do{
        cout<<tail->data<<" ";
        tail= tail->next;
      }while(tail !=temp);
      cout<<endl;
}
int main(){
    Node * tail = NULL;
    insert(tail,3,4);
    insert(tail,4,5);
    insert(tail,5,3);
    deleteNode(tail,5);
    deleteNode(tail,3);
    // cout<<tail->data<<endl;
   
    deleteNode(tail,4);
    cout<<tail<<endl;
    // deleteNode(tail,1);

    print(tail);
    
    
    
    

return 0;
}