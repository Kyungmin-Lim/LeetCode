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
        vector<int> result;
        if(root==NULL)
        {
            return result;
        }

        queue <TreeNode*> q;
        TreeNode* curr;
        TreeNode* prev;
        curr = root;
        prev = root;
        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            prev = curr;
            curr = q.front();
            q.pop();

            while(curr!=NULL)
            {
                if(curr->left != NULL)
                {
                    q.push(curr->left);
                }
                if(curr->right != NULL)
                {
                    q.push(curr->right);
                }
                prev = curr;
                curr = q.front();
                q.pop();
            }
            result.push_back(prev->val);
            if(!q.empty())
            {
                q.push(NULL);
            }
            
        }
        return result;

        
    }
};