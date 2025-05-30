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
    int sum=0;
    void TreeSum(TreeNode* node, int low, int high)
    {   
        int treesum=0;     
        if(node==NULL)
        {
            return;
        }

        if(node->left != NULL)
            TreeSum(node->left, low, high);

        if(node->right != NULL)
            TreeSum(node->right, low, high);

        
        if((node->val >= low)&&(node->val <= high))
        {
            sum += node->val;
        }

      



    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {        
        TreeSum(root, low, high);

        return sum;



        
    }
};