class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

    int height(TreeNode* root, int& diam) {
        if(root == NULL) return 0;

        int left = height(root->left, diam);
        int right = height(root->right, diam);

        
        diam = max(diam, left + right);

        return max(left, right) + 1;
    }
};
