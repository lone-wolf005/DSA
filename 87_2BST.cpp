//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};





// Function to Build Tree
Node* buildTree(string str)
{
   // Corner Case
   if(str.length() == 0 || str[0] == 'N')
       return NULL;

   // Creating vector of strings from input
   // string after spliting by space
   vector<string> ip;

   istringstream iss(str);
   for(string str; iss >> str; )
       ip.push_back(str);

   // Create the root of the tree
   Node* root = new Node(stoi(ip[0]));

   // Push the root to the queue
   queue<Node*> queue;
   queue.push(root);

   // Starting from the second element
   int i = 1;
   while(!queue.empty() && i < ip.size()) {

       // Get and remove the front of the queue
       Node* currNode = queue.front();
       queue.pop();

       // Get the current node's value from the string
       string currVal = ip[i];

       // If the left child is not null
       if(currVal != "N") {

           // Create the left child for the current node
           currNode->left = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->left);
       }

       // For the right child
       i++;
       if(i >= ip.size())
           break;
       currVal = ip[i];

       // If the right child is not null
       if(currVal != "N") {

           // Create the right child for the current node
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}



// } Driver Code Ends
/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution
{
    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    void toDoubly(Node*root,Node*&head){
        if(root==NULL) return;
        
        toDoubly(root->right,head);
        root->right = head;
        if(head){
            head->left = root;
        }
        head = root;
        
        toDoubly(root->left,head);
    }
    
    Node* sortedDLL(Node*head1,Node*head2){
        
        
        Node * head = NULL;
        Node * tail = NULL;
        
        while(head1 && head2){
            if(head1->data < head2->data){
                if(head == NULL){
                    head = head1;
                    tail = head1;
                    head1= head1->right;
                }
                else{
                    tail ->right = head1;
                    head1->left = tail;
                    tail = head1;
                    head1=head1->right;
                }
                
            }
            else{
                if(head == NULL){
                    head = head2;
                    tail = head2;
                    head2 = head2->right;
                    
                }
                else{
                    tail ->right = head2;
                    head2->left = tail;
                    tail=head2;
                    head2 = head2->right;
                    
                }
                
            }
        }
        while(head1){
            tail->right = head1;
            head1->left = tail;
            tail = head1;
            head1=head1->right;
        }
        while(head2){
            tail->right = head2;
            head2->left = tail;
            tail = head2;
            head2 = head2->right;
        }
        
    return head;
    
    
    }
    // int count(Node * head){
    //     Node * temp = head;
    //     int count = 0;
    //     while(temp !=NULL){
    //         count++;
    //         temp = temp ->next;
    //     }
    //     return count;
    // }
    // Node * toBST(Node*&head,int n){
    //     if(!root || n<=0){
    //         return NULL;
    //     }
        
    //   Node * left = toBST()
        
    // }
    void solve(vector<int>&ans,Node *head){
        while(head){
            ans.push_back(head->data);
            head=head->right;
        }
    }
    
    vector<int> merge(Node *root1, Node *root2)
    {
        // to doubly linkedlist
        Node * head1 = NULL;
        toDoubly(root1,head1);
        head1->left = NULL;
        
        // to doubly linked list
        Node * head2 = NULL;
        toDoubly(root2,head2);
        head1->left = NULL;
        
       //Your code here
       Node * head = sortedDLL(head1,head2);
       
       vector<int>ans;
       solve(ans,head);
       return ans;
       
    }
};

//{ Driver Code Starts.
int main() {

   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--)
   {
        string s; 
       getline(cin, s);
       Node* root1 = buildTree(s);

       getline(cin, s);
       Node* root2 = buildTree(s);
    
       // getline(cin, s);
       Solution obj;
       vector<int> vec = obj.merge(root1, root2);
       for(int i=0;i<vec.size();i++)
            cout << vec[i] << " ";
        cout << endl;
       ///cout<<"~"<<endl;
   }
   return 0;
}
// } Driver Code Ends