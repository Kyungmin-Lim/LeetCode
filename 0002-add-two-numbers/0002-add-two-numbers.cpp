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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dst=new ListNode;
        ListNode *curr=dst;
        int add = 0;

        while((l1!=NULL)&&(l2!=NULL))
        {
            ListNode* node = new ListNode;
            node->val = (l1->val + l2->val + add)%10;
            add = (l1->val + l2->val + add) >= 10 ? 1:0;
            curr->next = node;
            curr = curr->next;

            l1=l1->next;
            l2=l2->next;            
        }

        while(l1!=NULL)
        {
            ListNode* node = new ListNode;
            node->val = (l1->val + add)%10;
            add = (l1->val + add) >= 10 ? 1:0;
            curr->next = node;
            curr = curr->next;
            l1 = l1->next;
            // cout << "l1 != NULL: " << add <<endl;
        }

        while(l2!=NULL)
        {
            ListNode* node = new ListNode;
            node->val = (l2->val + add)%10;
            add = (l2->val + add) >= 10 ? 1:0;
            curr->next = node;
            curr = curr->next;
            l2 = l2->next;    

            // cout << "l2 != NULL: " << add <<endl;        
        }

        if(add != 0)
        {
            ListNode* node = new ListNode;
            node->val = 1;
            curr->next = node;            
        }

        return dst->next;

    }
};