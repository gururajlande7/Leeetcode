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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> v1, v2;
        TreeNode* x = helper(root, v1, p->val);
        TreeNode* y = helper(root, v2, q->val);
        TreeNode* lca;
        for (int i = 0; i < min(v1.size(), v2.size()); i++) {
            if (v1[i] != v2[i])
                break;
            lca = v1[i];
        }
        return lca;
    }

    TreeNode* helper(TreeNode* root, vector<TreeNode*>& vec, int x) {
        if (!root) {
            return nullptr;
        }

        vec.push_back(root);

        if (root->val == x) {
            return root;
        }

        TreeNode* left = helper(root->left, vec, x);
        TreeNode* right = helper(root->right, vec, x);

        if (!right && !left) {
            vec.pop_back();
            return nullptr;
        }
        return !left ? right : left;
    }
};