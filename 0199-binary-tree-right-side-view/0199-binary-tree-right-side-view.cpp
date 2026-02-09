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

        // BFS solution
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
    
        
    }
};