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
    int index=0;
    unordered_map<int, int> map;
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        // inorder: left->root->right
        // postorder: left->right->root

        // Time complexity: O(N)
        // Space complexity: O(N)

        for(int i=0; i<postorder.size(); i++)
        {
            map[inorder[i]]=i;
        }
        TreeNode* result;
        index = postorder.size()-1;
        result = helper(postorder, 0, postorder.size()-1);

        return result;        
    }
    TreeNode* helper(vector<int>& postorder, int start, int end){
        if(start>end) return nullptr;

        int node = postorder[index--];
        TreeNode* root = new TreeNode(node);
        int mid = map[node];

        root->right = helper(postorder, mid+1, end);
        root->left = helper(postorder, start, mid-1);
        

        return root;

    }
};