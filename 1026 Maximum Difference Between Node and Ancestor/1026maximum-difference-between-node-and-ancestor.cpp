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
    int diff=0;
    void inorder(TreeNode* root,int mini,int maxi){
        if(!root){
            return;
        }
        diff = max(diff, max(abs(root->val - maxi), abs(root->val - mini)));

        mini = min(mini,root->val);
        maxi=max(maxi,root->val);
        inorder(root->left,mini,maxi);
        inorder(root->right,mini,maxi);
    }
       
    int maxAncestorDiff(TreeNode* root) {
        if(!root){
            return 0;
        }
        int mini = root->val;
        int maxi = root->val;
        inorder(root,mini,maxi);
        return diff;

    }
};