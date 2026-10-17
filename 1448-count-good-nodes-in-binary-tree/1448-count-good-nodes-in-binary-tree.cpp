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
    int countnodes(TreeNode* root, int maxsofar){
        int count=0;
        if(!root) return 0;
        
        if(root->val>=maxsofar){
            maxsofar = root->val;
            count=1;
        }
        count+=countnodes(root->left,maxsofar);
        count+=countnodes(root->right,maxsofar);

        return count;
    }
    int goodNodes(TreeNode* root) {
        return countnodes(root,INT_MIN);
        


    }
};