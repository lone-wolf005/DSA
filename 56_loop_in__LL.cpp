//Radhe Radhe
bool is_cycle(Node*head){
    Node*temp = head;
    unorder_map<Node*,bool>m1;
    bool is_cylce = false;
    while(temp!=NULL){
          if(m1[temp]){
            is_cycle =true;
            break;
          }
          else m1[temp]=true;
          temp=temp->next;
    }
    if(is_cycle)return true;
    return false;

}
// floyd loop algorithms
bool is_cycle(Node*head){
    if(head!=NULL && head->next !=NULL);
    Node*slow = head;
    Node*fast = head;

    while(fast !=NULL ){
          fast=fast->next;
          if(fast !=NULL){
            fast=fast->next;
          }
          slow = slow->next;
          if(slow ==fast)return 1;
          
    }
    return false;
}


// starting node of cycle
//
Node* is_cycle(Node*head){
    if(head!=NULL && head->next !=NULL);
    Node*slow = head;
    Node*fast = head;

    while(fast !=NULL ){
          fast=fast->next;
          if(fast !=NULL){
            fast=fast->next;
          }
          slow = slow->next;
          if(slow ==fast)return slow;
    }    
}
Node* starting_node(Node*head){
    if(head==NULL)return NULL;
    Node * intersection = is_cycle(head);
    Node * fast = intersection;
    Node * slow = head;
    while(slow !=fast){
        slow=slow->next;
        fast= fase->next;
    }
    return fast;
}

void removing_Loop(Node*head){
    if(head==NULL)return NULL;
     
    Node*start= starting_node(head);
    Node*temp = start;
    while(temp->next != start){
        temp=temp->next;
    }
    temp->next=NULL;
}


