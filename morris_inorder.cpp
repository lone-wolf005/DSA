class Solution {
private:
void morisAlgo(TreeNode*curr,vector<int>&ans){
        while(curr){
            if(!curr->left){
              ans.push_back(curr->val);
              curr=curr->right;     
           }
           else{
             TreeNode*pre = curr->left;
             while(pre->right && pre->right !=curr){
                   pre=pre->right;
             }
             if(!pre->right){
                 pre->right = curr;
                 curr=curr->left;
             }
             else{
                 pre->right = NULL;
                 ans.push_back(curr->val);
                 curr=curr->right;
             }
         }


        }

}
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        morisAlgo(root,ans);
        return ans;
        
        
    }
};