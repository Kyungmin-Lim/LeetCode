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
    struct compare
    {
        bool operator()(ListNode*list1, ListNode*list2)
        {
            return list1->val > list2->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode Dummy = ListNode(0);
        ListNode *curr = &Dummy;
        priority_queue<ListNode*, vector<ListNode*>, compare> qp;

        int n = lists.size();
        for(int i=0; i<n; i++)
        {
            if(lists[i] != nullptr)
            {
                qp.push(lists[i]);
            }
        }
        while(!qp.empty())
        {
            curr->next = qp.top();
            if(qp.top()->next)
            {
                qp.push(qp.top()->next);
            }
            qp.pop();
            curr =  curr->next;
        }

        return Dummy.next;        
        
    }
};