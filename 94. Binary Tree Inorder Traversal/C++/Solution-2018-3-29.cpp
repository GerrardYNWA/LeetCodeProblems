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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> values;
        stack<TreeNode*> tree_nodes;
        TreeNode *cur = root;
        while (cur != NULL || !tree_nodes.empty()) {
            if (cur != NULL) {
                tree_nodes.push(cur);
                cur = cur->left;
            } else {
                cur = tree_nodes.top();
                tree_nodes.pop();
                values.push_back(cur->val);
                cur = cur->right;
            }
        }
        return values;
    }
};