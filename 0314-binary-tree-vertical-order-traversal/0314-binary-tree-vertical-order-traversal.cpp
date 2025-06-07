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
    vector<vector<int>> verticalOrder(TreeNode* root) {        

        if(root==NULL)
        {
            return {};
        }

        unordered_map <int, vector<int>> map;   // column, val
        queue <pair<TreeNode*, int>> q;    // node, column
        q.push({root, 0});     
        map[0] = {root->val};

        while(!q.empty())
        {
            TreeNode* curr = q.front().first;
            int index = q.front().second;
            q.pop();

            if(curr->left != NULL)
            {
                q.push({curr->left, index-1});

                if(map.find(index-1) == map.end())
                {
                    map[index-1] = {curr->left->val};
                }
                else
                {
                    map[index-1].push_back({curr->left->val});
                    // map.insert({index-1, curr->left->val});
                }
            }
            if(curr->right != NULL)
            {
                q.push({curr->right, index+1});

                if(map.find(index+1) == map.end())
                {
                    map[index+1] = {curr->right->val};
                }
                else
                {
                    map[index+1].push_back({curr->right->val});
                    // map.insert({index+1, curr->right->val});
                }
            }
        }

        vector <pair<int, vector<int>>> vec(map.begin(), map.end());
         

        
        sort(vec.begin(), vec.end());

        vector<vector<int>> result;
        for(auto i : vec)
        {
            result.push_back(i.second);
        }
        return result;
        
    }
};