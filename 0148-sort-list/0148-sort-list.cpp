/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        // unordered_map<int, ListNode*> map;
        vector<int> val;

        ListNode* curr = head;
        if(!curr)
        {
            return nullptr;
        }

        while(curr)
        {
            // map[curr->val] = curr;
            val.push_back(curr->val);
            curr=curr->next;
        }

        sort(val.begin(), val.end());

        // head = map[val[0]];
        curr = head;
        
        for(int i=0; i<val.size(); i++)
        {   
            curr->val = val[i];   
            // curr->next = map[val[i]];
            curr = curr->next;            
        }
        // curr->next = nullptr;

        return head;
        
    }
};