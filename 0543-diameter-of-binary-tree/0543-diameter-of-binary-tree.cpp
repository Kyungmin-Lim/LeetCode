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
    int diameter;
    int longestPath(TreeNode* node)
    {
        if(node==NULL)
        {
            return -1;
        }
        
        int leftpath = longestPath(node->left);
        int rightpath = longestPath(node->right);
        diameter = max(diameter, leftpath+rightpath+2);

        return max(leftpath, rightpath)+1;

    }


public:
    int diameterOfBinaryTree(TreeNode* root) {
        diameter=0;
        longestPath(root);
        return diameter;

        
    }
};