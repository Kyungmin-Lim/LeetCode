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
    int countNodes(TreeNode* root) {
        if(root==nullptr)
        {
            return 0;
        }
        int result = 1;

        helper(root, result);

        return result;
                
    }
    void helper(TreeNode* root, int& result){
        TreeNode* curr = root;
        
        if(curr->left)
        {
            result++;
            helper(curr->left, result);
        }
        if(curr->right)
        {
            result++;
            helper(curr->right, result);
        }
    }

};