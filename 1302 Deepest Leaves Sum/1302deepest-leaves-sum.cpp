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
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }

        return 1 + max(maxDepth(root->left),maxDepth(root->right));

    }
    int sum;
    void dfs(TreeNode* root, int curr, int target){
        if(root==NULL){
            return;
        }
        if(curr==target){
            sum+=root->val;
        }
        dfs(root->left,curr+1,target);
        dfs(root->right,curr+1,target);
    }
    int deepestLeavesSum(TreeNode* root) {
        int depth = maxDepth(root);
        sum=0;
        dfs(root,1,depth);
        return sum;
        

        
    }
};