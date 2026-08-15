class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);  
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key); 
        } else {
            if (!root->left && !root->right) {
                delete root;
                return nullptr;
            }
            if (!root->left || !root->right) {
                TreeNode* child = root->left ? root->left : root->right;
                delete root;
                return child;
            } else {
                TreeNode* single = is(root->right);
                root->val = single->val;
                root->right = deleteNode(root->right, root->val); 
            }
        }
        return root;
    }

    TreeNode* is(TreeNode* root) {
        while (root->left) root = root->left;
        return root;
    }
};
