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
    ListNode *dst;
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if((list1 == NULL) && (list2 == NULL))
        {
            dst = NULL;
            return dst;
        }
        
        if(list1 == NULL)
        {
            dst = list2;
            return dst;
        }
            
        if(list2 == NULL)
        {
            dst = list1;
            return dst;
        }            

        if(list1->val > list2->val)
        {
            dst = list2;
            //if(list2->next != NULL)
            list2 = list2->next;
        }
        else
        {
            dst = list1;
            //if(list1->next != NULL)
            list1 = list1->next;
        }
       
        ListNode *curr=dst;

        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val > list2->val)
            {
                curr->next = list2;
                //if(list2->next != NULL)
                list2 = list2->next;
            }
            else
            {   
                curr->next = list1;
                //if(list1->next != NULL)
                list1 = list1->next;
            }
            curr = curr->next;
        }

        if(list1 != NULL)
        {
            curr->next = list1;            
        }  

        if(list2 != NULL)
        {
            curr->next = list2;            
        }  

        return dst;
    }
};