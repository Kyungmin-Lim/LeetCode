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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // BFS approach.

        queue<TreeNode*> q;
        vector<vector<int>> result;

        TreeNode* node = root;
        if(!node)
        {
            return result;
        }
       
        q.push(root);
        while(!q.empty())
        {
            int num = q.size();
            vector<int> level;
            for(int i=0; i<num; i++)
            {   
                TreeNode* tmp = q.front();
                q.pop();
                level.push_back(tmp->val);
                
                if(tmp->left)
                {
                    q.push(tmp->left);
                }
                if(tmp->right)
                {
                    q.push(tmp->right);
                }
            }
            result.push_back(level);
        }
        return result;
    }
};