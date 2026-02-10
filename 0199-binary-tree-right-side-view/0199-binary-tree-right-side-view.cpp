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
    vector<int> rightSideView(TreeNode* root) {
        /*
        // BFS solution
        // Time complexity: O(N)
        // Space complexity: O(W) : W is equal to width of tree. 
        //                   The worst case is W = 0.5N -> O(N)
        queue<TreeNode*> q;
        vector<int> result;

        if(root)
        {
            q.push(root);
        }
        else
        {
            return result;
        }

        while(!q.empty())
        {
            int num_level = q.size();            

            for(int i=0; i<num_level; i++)
            {   
                TreeNode* curr = q.front();
                q.pop();     
                if(i==num_level-1)
                {                    
                    result.push_back(curr->val);
                }               

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }           

        }
        return result;
        */

        // DFS solution
        vector<int> result;
        if(!root)
        {
            return result;
        }
        solve(0, root, result);

        return result;
        
    }

    void solve(int level, TreeNode* node, vector<int>& result)
    {
        if(!node)
            return;

        if(level==result.size())
        {
            result.push_back(node->val);
        }

        solve(level+1, node->right, result);
        solve(level+1, node->left, result);
    }
};