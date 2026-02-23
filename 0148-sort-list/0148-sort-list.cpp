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
        if(!head || !head->next )
        {
            return head;
        }

        ListNode* mid = getMid(head);
        
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = nullptr;

        left = sortList(left);
        right = sortList(right);

        return merge(left, right);

/*
        // Time complexity: O(NlogN) -> because of using sort
        // Space complexity: O(N)
        vector<int> val;

        ListNode* curr = head;
        if(!curr)
        {
            return nullptr;
        }

        while(curr)
        {
            val.push_back(curr->val);
            curr=curr->next;
        }
        // The time complexity of this part is O(NlogN)
        sort(val.begin(), val.end());
        
        curr = head;
        
        for(int i=0; i<val.size(); i++)
        {   
            curr->val = val[i];   
            curr = curr->next;            
        }        

        return head;
*/        
    }
    ListNode* getMid(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* left, ListNode* right)
    {
        // when we use 'new' here, it makes memory leakage.
        // ListNode* result = new ListNode(0);

        ListNode result(0);
        ListNode* curr = &result;

        while(left && right)
        {
            if(left->val < right->val)
            {
                curr->next = left;
                left = left->next;
            }
            else
            {
                curr->next = right;
                right = right->next;
            }
            curr = curr->next;
        }

        if(left)
        {
            curr->next = left;
            //left = left->next;
            //curr = curr->next;
        }
        if(right)
        {
            curr->next = right;
            //right= right->next;
            //curr = curr->next;
        }
        return result.next;

    }
};