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
    vector<int> rightSideView(TreeNode* root) {
        map<int, int> mp;
        helper(root, mp, 0);

        vector<int> vec;
        for (auto& p : mp) {
            vec.push_back(p.second);
        }
        return vec;
    }
        void helper(TreeNode * root, map<int, int> & mp, int h) {
            if (!root)
                return;

            mp[h] = root->val;

            helper(root->left, mp, h + 1);
            helper(root->right, mp, h + 1);
        }
    };