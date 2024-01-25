//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Node {
    public:
    int data;
    Node*right;
    Node*left;
    Node(int data){
        this->data= data;
        this->right=NULL;
        this->left = NULL;
    }
};
Node* insertBST(Node*root,int data){
    if(!root){
        root = new Node(data);
        return root;
    }
    // left part 
    if(data <root->data)
    root->left = insertBST(root->left,data);
    //right part
    if(data > root->data)
    root->right = insertBST(root->right,data);

    return root;
}
int min_value(Node*root){
    if(root == NULL)return -1;
    Node*temp = root;
    while(temp->left){
       temp = temp->left;
    }
    return temp->data;
}
int max_value(Node*root){
    if(root == NULL)return -1;
    Node*temp = root;
    while(temp->right){
       temp = temp->right;
    }
    return temp->data;
}
Node * deleteBST(Node*root,int data){
    if(root == NULL)return root;
    if(root->data == data){
        //leaf
        if(!root->right && !root->left){
            delete root;
            return NULL;
        }
        else if(!root->right){
            Node * temp = root->left;
            delete root;
            return temp;
        }
        else if(!root->left){
            Node * temp = root->right;
            delete root;
            return temp;
        }
        else{
           int mini = min_value(root->right);
           //you can also use max value of left subtree
           root->data = mini;
           root->right= deleteBST(root->right,mini);
           return root;
        }  
    }
    if(data > root->data){
        root->right = deleteBST(root->right,data);
    }
    else{
        root->left = deleteBST(root->left,data);
    }
}


void levelOrderTraversal(Node*root){
      queue<Node*>q;
      q.push(root);
      q.push(NULL);

      while(!q.empty()){
           Node*temp = q.front();
           q.pop();
          if(temp == NULL){
             cout<<endl;
             if(!q.empty())q.push(NULL);
          }
          else{
            cout<<temp->data<<" ";
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
          }
      }
}
void preorder(Node*root){
     if(root == NULL){
        return;
     }
     cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
}
void inorder(Node*root){
     if(root == NULL){
        return;
     }
     inorder(root->left);
     cout<<root->data<<" ";  
     inorder(root->right);
}
void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertBST(root,data);
        cin>>data;
    }
}
int main(){
    Node * root = NULL;
    cout<<"Enter the data for creating BST"<<endl;
    takeinput(root);
    // preorder(root);
    levelOrderTraversal(root);
    inorder(root);

    root = deleteBST(root,10);
    cout<<endl;
    levelOrderTraversal(root);
    inorder(root);

return 0;
}