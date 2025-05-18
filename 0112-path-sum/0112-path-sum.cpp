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
    bool hasPathSum(TreeNode* root, int targetSum) {

        if(root == NULL)
            return false;     
        
        TreeNode* Left = root->left;
        TreeNode* Right = root->right;
        
        if((Left!=NULL)&&(Right!=NULL))
            return (hasPathSum(Left, targetSum-(root->val)) + hasPathSum(Right, targetSum-(root->val)));
        else if((Left!=NULL)&&(Right==NULL))
            return hasPathSum(Left, targetSum-(root->val));
        else if((Left==NULL)&&(Right!=NULL))
            return hasPathSum(Right, targetSum-(root->val));
        else // (Left==NULL)&&(Right==NULL)
        {
            if(targetSum==root->val)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        //return false;
        
    }
};