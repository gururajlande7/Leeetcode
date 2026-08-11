class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        int l = height(root->left);
        int r = height(root->right);

        if(abs(l - r) > 1) return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }

    int height(TreeNode* root) {
        if(root == NULL) return -1;
        if(root->left == NULL && root->right == NULL) return 0;

        return max(height(root->left), height(root->right)) + 1;
    }
};
