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
        if(!root)
        {
            return 0;
        }
        int num=0;
        int left=1;
        int right=1;
        TreeNode* curr = root;
        while(curr->left)
        {
            left++;
            curr=curr->left;
        }
        curr = root;
        while(curr->right)
        {
            right++;
            curr=curr->right;
        }
        
        if(left==right)
        {
            num= (1<<left)-1;
        }
        else
        {
            num = 1+countNodes(root->left)+countNodes(root->right);
        }
        return num;



        
    }
};