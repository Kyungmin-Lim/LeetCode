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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode Dummy = ListNode(0);    
        ListNode *Curr = &Dummy;   

        while(list1 && list2)
        {
            if(list1->val < list2->val)
            {
                Curr->next = list1;
                list1 = list1->next;
            }
            else
            {
                Curr->next = list2;
                list2 = list2->next;
            }
            Curr = Curr->next;
        }

        while(list1)
        {
            Curr->next = list1;
            Curr = Curr->next;
            list1 = list1->next;
        }
        while(list2)
        {
            Curr->next = list2;
            Curr = Curr->next;
            list2 = list2->next;
        }

        return Dummy.next;
    }
};