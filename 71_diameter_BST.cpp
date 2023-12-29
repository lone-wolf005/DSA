class Solution {
private:
pair<int,int>FastDiameter(TreeNode*root){
    if(!root){
        auto p = make_pair(0,0);
        return p;
    }
    auto leftAns = FastDiameter(root->left);
    auto rightAns = FastDiameter(root->right);
    
    int lefty = leftAns.first;
    int righty = rightAns.first;
    int curr = (leftAns.second + rightAns.second )+ 1;
    int currAns = max(lefty,max(righty,curr));
    auto ans = make_pair(0,0);
    ans.first = currAns;
    ans.second = max(leftAns.second, rightAns.second) + 1;
    return ans;
    
}
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return FastDiameter(root).first-1;
    }
};