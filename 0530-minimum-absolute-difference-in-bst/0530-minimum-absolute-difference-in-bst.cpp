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
    int prevVal = -1;
    int getMinimumDifference(TreeNode* root) {
        if(!root)
        {
            return minVal;
        }              
        getMinimumDifference(root->left);

        if(prevVal!=-1)
        {
            minVal = min(abs(prevVal-root->val), minVal);            
        }
        prevVal = root->val;
        
        getMinimumDifference(root->right);   
        return minVal;   
        
    }
};