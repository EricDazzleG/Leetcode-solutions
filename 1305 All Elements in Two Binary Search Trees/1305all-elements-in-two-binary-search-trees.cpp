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
    vector<int>ans;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>a;
        if(root1!=NULL && root2==NULL){
           inorder(root1);
           return ans;
        }
        if(root1==NULL && root2!=NULL){
            inorder(root2);
            return ans;
        }
        else{
            inorder(root1);
            inorder(root2);
            sort(ans.begin(),ans.end());
            return ans;

        }
    }
};