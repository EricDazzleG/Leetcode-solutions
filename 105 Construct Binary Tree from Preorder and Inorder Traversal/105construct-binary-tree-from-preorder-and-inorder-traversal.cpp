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
    int preindex;
    unordered_map<int,int> mapping;

    TreeNode* build(vector<int>&preorder,int start,int end){
        if(start>end) return NULL;
        int rval = preorder[preindex++];
        TreeNode* root = new TreeNode(rval);
        int mid = mapping[rval];
        root->left= build(preorder,start,mid-1);
        root->right= build(preorder,mid+1, end);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        mapping.clear();
        for(int i =0;i<inorder.size();i++){
            mapping[inorder[i]]=i;
        }
        preindex=0;
        return build(preorder,0,inorder.size()-1);
    }
};