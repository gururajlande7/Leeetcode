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
    bool isUnivalTree(TreeNode* root) {
        if(!root)
            return true;
       int x = root->val;
        return same(root,x);
    }
    bool same(TreeNode* root , int x){
        if(!root)
            return true;

        bool a=same(root->left,x);
        bool b=same(root->right,x);

        if(root->val!=x){
            return false;
        }

        return a && b;
    }
};
