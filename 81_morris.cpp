class Solution {
private:
void MorisAlgo(TreeNode*root,vector<int>&ans){
    while(root){
        if(!root->left){
            ans.push_back(root->val);
            root = root->right;
        }
        else{
            TreeNode * pre = root->left;
            while(pre->right && pre->right != root){
                pre = pre->right;
            }
            if(pre->right == NULL){
                pre->right = root;
                ans.push_back(root->val);
                root = root->left;
            }
            else{
                pre->right = NULL;
                root = root->right;
            }
        }
    }
}
void preorder(TreeNode * root,vector<int>&ans){
    if(root == NULL)return;
    ans.push_back(root->val);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(!root)return ans;
        preorder(root,ans);
        return ans;
       
    }
};