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
    int dfs(TreeNode* node, int &res){
        if(!node){
            return 0;
        }

        int l = max(0,dfs(node->left,res));
        int r = max(0,dfs(node->right,res));
        res = max(res, l+r+node->val);

        return max(l,r)+node->val;
    }
    int maxPathSum(TreeNode* root) {
        int result = root->val;
        dfs(root,result);
        return result;
    }
};