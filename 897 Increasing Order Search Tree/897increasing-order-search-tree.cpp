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
    vector<int> arr;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);

    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        TreeNode* r2 = new TreeNode(arr[0]);
        TreeNode* temp = r2;
        for(int i=1;i<arr.size();++i){
            TreeNode* right= new TreeNode(arr[i]);
            temp->right= right;
            temp=temp->right;

        }
        return r2;
    }
};