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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> values;
        if (root == NULL) {
            return values;
        }
        
        stack<TreeNode*> tree_nodes;
        tree_nodes.push(root);
        TreeNode *cur;
        TreeNode *pre = NULL;
        while (!tree_nodes.empty()) {
            cur = tree_nodes.top();
            if ((cur->left == NULL && cur->right == NULL) ||
                (pre != NULL && (pre == cur->left || pre == cur->right))) {
                values.push_back(cur->val);
                tree_nodes.pop();
                pre = cur;
            } else {
                if (cur->right != NULL) {
                    tree_nodes.push(cur->right);
                }
                if (cur->left != NULL) {
                    tree_nodes.push(cur->left);
                }
            }
        }
        return values;
    }
};