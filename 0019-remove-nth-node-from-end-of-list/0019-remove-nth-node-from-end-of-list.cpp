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
    //stack<ListNode*> s;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast;
        ListNode* slow;

        ListNode Dummy = ListNode(0);

        Dummy.next = head;
        ListNode* curr = &Dummy;
        fast = curr;
        slow = curr;

        for(int i=0; i<n; i++)
        {
            fast = fast->next;            
        }


        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;

        }

        slow->next = slow->next->next;
        /*
        if(n==1)
        {
            slow->next = fast->next;
        }
        else
        {
            slow->next = fast;
        }
        */

        return Dummy.next;
        
        /*
        // Time complexity: O(N)
        // Space complexity: O(N)
        ListNode Dummy(0);
        Dummy.next = head;
        ListNode* curr = &Dummy;

        int num=0;

        //s.push(Dummy);
        while(curr)
        {
            num++;
            s.push(curr);
            curr = curr->next;
        }
        for(int i=0; i<n; i++)
        {
            s.pop();
        }

        curr = s.top();
        ListNode* dst = curr->next->next;

        curr->next = dst;

        return Dummy.next;
        */

        
    }
};