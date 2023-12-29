/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
void insertAtTail(Node*&tail,Node*curr){
    tail->next = curr;
    tail = curr;

}
Node* sortList(Node *head){
    // Write your code here.
    Node*zeroHead =new Node(-1);
    Node*zeroTail =zeroHead;
    Node*oneHead =new Node(-1);
    Node*oneTail = oneHead;
    Node*twoHead =new Node(-1);
    Node*twoTail =twoHead;
    
    Node* temp = head;
    while(temp !=NULL){
        if(temp->data == 0){
            insertAtTail(zeroTail, temp);
        }
        else if(temp->data == 1){
            insertAtTail(oneTail, temp);
        }
        else if(temp->data == 2){
            insertAtTail(twoTail, temp);
        }
        temp = temp ->next;
    }

    // merging the list of zero one two

    if(oneHead ->next !=NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head= zeroHead->next;

    delete zeroHead,oneTail,twoTail;
    return head;


// dummy node are added inorder to minimise the if else condition in  56 --60 section


}