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
    int minVal = INT_MAX;
    int getMinimumDifference(TreeNode* root) {
        int rootVal = 0;
        int leftVal = 0;
        int rightVal = 0;
        if(root)
        {
            rootVal = root->val;
        }
        else
        {   
            return INT_MAX;            
        }
        if(root->left)
        {
            leftVal = root->left->val;            
        }
        else
        {
            leftVal = INT_MAX>>1;
        }
        if(root->right)
        {
            rightVal = root->right->val;            
        }
        else
        {
            rightVal = INT_MAX;
        }

        int currMin = min(min(abs(rightVal-leftVal), abs(rootVal-leftVal)), abs(rootVal-rightVal));
        minVal =  min(minVal, currMin);

        getMinimumDifference(root->left);
        getMinimumDifference(root->right);

        return minVal;
        
    }
};