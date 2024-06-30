/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    int sum = 0;
public:
    TreeNode* bstToGst(TreeNode* root) {
        if(root!= nullptr){
           bstToGst(root->right);
           root->val += sum;
           sum = root->val;
           bstToGst(root->left);

        }
        return root;
    }
};
