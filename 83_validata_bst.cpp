/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode*root,long long int p,long long q){
        if(!root)return true;
        bool a = solve(root->left,p,root->val);
        bool b = solve(root->right,root->val,q);
        bool c = false;
        if(root->val > p && root->val < q)c = true;
        return a&&b&&c;

    }
    bool isValidBST(TreeNode* root) {
        if(!root->left && !root->right)return true;
        return solve(root,LONG_MIN,LONG_MAX);
    }
};