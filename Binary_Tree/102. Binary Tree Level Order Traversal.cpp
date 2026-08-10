class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root)
            return ans;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        vector<int> vec;
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();

            if (curr) {
                vec.push_back(curr->val);
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            } else {
                ans.push_back(vec);
                vec.clear();
                if (!q.empty()) {
                    q.push(NULL);
                }
            }
        }
        return ans;
    }
};
