/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// class Solution {
// public:
//     vector<int> values;
//     vector<int> preorderTraversal(TreeNode* root) {
//         recursivePreorder(root);
//         return values;
//     }
// private:
//     void recursivePreorder(TreeNode* root) {
//         if (root != NULL) {
//             values.push_back(root->val);
//             if (root->left != NULL) {
//                 recursivePreorder(root->left);
//             }
//             if (root->right != NULL) {
//                 recursivePreorder(root->right);
//             }
//         }
//     }
// };

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> values;
        stack<TreeNode*> tree_nodes;
        tree_nodes.push(root);
        while (!tree_nodes.empty()) {
            TreeNode *tn = tree_nodes.top();
            tree_nodes.pop();
            if (tn != NULL) {
                values.push_back(tn->val);
                if (tn->right != NULL) {
                    tree_nodes.push(tn->right);
                }
                if (tn->left != NULL) {
                    tree_nodes.push(tn->left);
                }
            }
        }
        return values;
    }
};