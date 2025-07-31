/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* out = new TreeNode();
    void getcopy(TreeNode* root, TreeNode* target){
        if(root==NULL) return;
        getcopy(root->left,target);
        if(root->val==target->val){
            out=root;
        }
        getcopy(root->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        getcopy(cloned,target);
        return out;
        
    }
};