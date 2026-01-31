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
    bool isSubTreeSymmetric(TreeNode* L, TreeNode* R){
        if(!L && !R)
        {
            return true;
        }
        if(!L || !R || L->val!=R->val)
        {
            return false;
        }

        return isSubTreeSymmetric(L->left, R->right)&&isSubTreeSymmetric(L->right, R->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(!root->left && !root->right)
        {
            return true;
        }
        if(!root->left || !root->right || root->left->val!=root->right->val)
        {
            return false;
        }
        return isSubTreeSymmetric(root->left, root->right);
        
    }
};