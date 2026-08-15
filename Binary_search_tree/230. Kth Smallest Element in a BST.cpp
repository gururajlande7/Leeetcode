/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* h = helper(root, k);
        return h->val;
    }

    TreeNode* helper(TreeNode* root, int& n) {

        if (!root)
            return nullptr;

        TreeNode* left = helper(root->left, n);
        if (left)
            return left;

        n--;
        if (n == 0)
            return root;

        return helper(root->right, n);
    }
};