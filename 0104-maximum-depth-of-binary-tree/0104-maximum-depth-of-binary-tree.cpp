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
    int maxDepth(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        int result=0;

        result = DFS(0, root);

        return result;        
    }
    int DFS(int depth, TreeNode* node){
        if(!node)
        {
            return depth;
        }

        int maxDepth=0;
        maxDepth = max(DFS(depth+1, node->left), DFS(depth+1, node->right));
        return maxDepth;

    }
    

};