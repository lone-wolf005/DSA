//Radhe Radhe
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class node {
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }  
};
node* buildTree(node* &root){
      cout<<"enter the data for node";
      int data;
      cin>>data;
      root= new node(data);
      if(data == -1){
        return NULL;
      }
      cout<<"enter the data for the left of "<<data<<endl;
      root->left=buildTree(root->left);
      cout<<"enter the data for the right of "<<data<<endl;
      root->right=buildTree(root->right);    
    return root;
}
void levelOrderTraversal(node*root){
      queue<node*>q;
      q.push(root);
      q.push(NULL);

      while(!q.empty()){
           node*temp = q.front();
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
void inorder(node*root){
     if(root == NULL){
        return;
     }
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
}
void preorder(node*root){
     if(root == NULL){
        return;
     }
     cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
}
void postorder(node*root){
     if(root == NULL){
        return;
     }
     inorder(root->left);
     inorder(root->right);
     cout<<root->data<<" ";
}
int main(){
    node*root;
    root = buildTree(root);
    
    // 5 3 1 -1 -1 2 -1 -1  2  4 -1 -1 -1
    levelOrderTraversal(root);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;


return 0;
}