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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int N = nums.size();
        TreeNode* result = GenTree(nums, 0, N-1);

        return result;        
    }
    TreeNode* GenTree(vector<int>& nums, int start, int end)
    {        
        if(start > end)
        {
            return nullptr;
        }        

        int mid = start + ((end-start)>>1);       
        TreeNode* node = new TreeNode(nums[mid]);

        node->left = GenTree(nums, start, mid-1);
        node->right = GenTree(nums, mid+1, end);

        return node;        
    }
};