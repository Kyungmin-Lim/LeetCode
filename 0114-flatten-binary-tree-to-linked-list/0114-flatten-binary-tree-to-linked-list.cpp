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
    void flatten(TreeNode* root) {
        /*
        if(!root)
        {
            return;
        } 

        // Time Complexity: O(N)
        // Space Complexity: O(H) H is height of tree. it can be O(N) when the worst case.

        flatten(root->left);
        flatten(root->right);

        if(root->left)
        {
            TreeNode* tmpRight = root->right;
            root->right = root->left;
            root->left = nullptr;

            TreeNode* curr = root;
            while(curr->right)
            {
                curr = curr->right;                
            }
            curr->right = tmpRight;
        }  
        */   


        if(!root)
        {
            return;
        }
        TreeNode* curr = root;
        while(curr)
        {
            if(curr->left)
            {
                TreeNode* last = curr->left;
                while(last->right)
                {
                    last = last->right;
                }
                last->right = curr->right;
                curr->right = curr->left;
                curr->left = nullptr;
            }
            curr = curr->right;
        }
    }
    
};