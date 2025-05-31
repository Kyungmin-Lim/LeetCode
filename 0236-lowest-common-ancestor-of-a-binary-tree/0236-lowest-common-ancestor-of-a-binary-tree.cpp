/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

private:
    TreeNode* ans;

public:
    Solution(){
        this->ans = NULL;
    }
    bool recursiveTree(TreeNode* node, TreeNode* p, TreeNode* q){
        if(node == NULL)
        {
            return false;
        }

        int left = recursiveTree(node->left, p, q)? 1 : 0;
        int right = recursiveTree(node->right, p, q)? 1 : 0;

        int mid = 0;
        if((node->val == p->val)||(node->val == q->val))
        {
            mid = 1;
        }

        if(mid+left+right>=2)
        {
            ans = node;            
        }

        if(mid+left+right>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {        
        recursiveTree(root, p, q);
        return ans;
    }
};