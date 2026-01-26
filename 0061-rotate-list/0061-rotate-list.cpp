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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0||head==nullptr)
        {
            return head;
        }
        int num_node = 0;
        ListNode* tmp = head;
        while(tmp->next!=nullptr)
        {
            num_node++;
            tmp = tmp->next;
        }
        num_node++;
        cout << num_node << endl;
        if(num_node==0)
        {
            return head;
        }
        k = k%num_node;        
        tmp->next = head; // link tail to head

        ListNode* prev_target = head;
        for(int i=0; i<num_node-k-1; i++)
        {
            prev_target = prev_target->next;
        }
        ListNode* target = prev_target->next;
        head = target;
        prev_target->next = nullptr;

        return head;
    }
};