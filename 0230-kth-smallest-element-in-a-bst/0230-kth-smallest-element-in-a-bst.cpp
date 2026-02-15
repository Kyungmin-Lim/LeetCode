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
    int count=0;
    int val=0;
    int kthSmallest(TreeNode* root, int k) {
        // Time complexity: O(N)
        // Space complexity: O(H): logN or O(N) when tree is skewed.
        searchNode(root, k);

        return val;        
    }
    void searchNode(TreeNode* root, int k)
    {
        if(!root)   return;

        searchNode(root->left, k);
        count++;

        if(count==k)
        {
            val = root->val;            
        }
        searchNode(root->right, k);
    }
};