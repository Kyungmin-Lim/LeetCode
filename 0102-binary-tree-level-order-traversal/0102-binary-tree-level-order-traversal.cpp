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
    vector<vector<int>> result;
    vector<vector<int>> levelOrder(TreeNode* root) {
        // DFS solution
        SearchDFS(root, 0);
        return result;




    /*    
        // BFS solution
        // Time complexity: O(N)
        // Space complexity: O(N/2)=O(N) when maximum width.

        vector<vector<int>> result;
        
        if(!root)
        {
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int num = q.size();
            vector<int> currentLevel;
            for(int i=0; i<num; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                currentLevel.push_back(node->val);                

                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
            result.push_back(currentLevel);            
            currentLevel.clear();
        }
        return result;
    */    
    }
    void SearchDFS(TreeNode* root, int level)
    {        
        if(!root)
        {
            return;
        }
        if(result.size()==level)
        {
            result.push_back({});
        }

        result[level].push_back(root->val);

        SearchDFS(root->left, level+1);
        SearchDFS(root->right, level+1);

    }
};