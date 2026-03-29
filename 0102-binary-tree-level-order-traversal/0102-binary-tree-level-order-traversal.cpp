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
    void DFS(TreeNode* node, int level, vector<vector<int>> &result)
    {
        if(!node)
        {
            return;
        }

        if(result.size()==level)
        {
            //result[level].push_back({});  // This is not correct!!!
            result.push_back({});            
        }
        result[level].push_back(node->val);

        DFS(node->left, level+1, result);
        DFS(node->right, level+1, result);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        /*
        // BFS approach.
        // Time complexity: O(N)
        // Space complexity: O(W) but when full binary tree, 
        //                   the number of last level nodes are O(N/2) = O(N).

        queue<TreeNode*> q;
        vector<vector<int>> result;

        if(!root)
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
        */

        // DFS approach.

        vector<vector<int>> result;
        DFS(root, 0, result);

        return result;

    }
};