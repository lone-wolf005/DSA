// recursive  
void solve(Node*root,vector<int>&ans,queue<Node*>&q){
    if(!root)return;
    if(root->left)q.push(root->left);
    ans.push_back(root->data);
    solve(root->right,ans,q);
    if(q.empty())return;
    Node*curr = q.front();
    q.pop();
    solve(curr,ans,q);
    
    
}
vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   if(!root)return ans;
   queue<Node*>q;
   solve(root,ans,q);
   return ans;
}

//