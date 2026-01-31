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
    int maxDepth(TreeNode* root) {
        int maxDepthLeft=0;
        int maxDepthRight=0;

        int result=0;

        if(root==nullptr)
        {
            return result;
        }

        if(root->right)
        {
            maxDepthRight=maxDepth(root->right);
        }
        
        if(root->left)
        {
            maxDepthLeft=maxDepth(root->left);
        }

        result = 1+max(maxDepthRight, maxDepthLeft);
        return result;
        
    }
};