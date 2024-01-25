class Solution {
private:
    void mapping(map<int,int>&InordertoIndex,vector<int>inorder){
           for(int i = 0;i < inorder.size();i++){
               InordertoIndex[inorder[i]] = i;
           }
    }
    TreeNode * solve( vector<int>& inorder,vector<int>& preorder,int startI,int endI,int& index,int n,map<int,int>&InordertoIndex){
        if(index >=n || startI > endI)return NULL;
        int element = preorder[index++];
        TreeNode * root = new TreeNode(element);
        int position = InordertoIndex[element];
        root->left = solve(inorder,preorder,startI,position-1,index,n,InordertoIndex);
        root->right = solve(inorder,preorder,position+1,endI,index,n,InordertoIndex);
        // root->right =
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        map<int,int>InordertoIndex;
        mapping(InordertoIndex,inorder);
        int index = 0;
        TreeNode * root = solve(inorder,preorder,0,n-1,index,n,InordertoIndex);
        return root;
        
    }
};