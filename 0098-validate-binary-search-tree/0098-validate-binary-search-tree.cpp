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
public:
    bool Validate(TreeNode* node, long long min_val, long long max_val){
        if(!node)
        {
            return true;
        }
        if(node->val<=min_val || node->val>=max_val)
        {
            return false;
        }

        return Validate(node->left, min_val, node->val)&&Validate(node->right, node->val, max_val);
    }
    bool isValidBST(TreeNode* root) {
        long long max_val = LLONG_MAX;
        long long min_val = LLONG_MIN;

        return Validate(root, min_val, max_val);
        
    }
};