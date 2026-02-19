/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
        {
            return nullptr;
        }
        Node* curr = head;
        while(curr)
        {
            Node* node = new Node(curr->val);
            node->next = curr->next;
            curr->next = node;         
            curr = node->next;
        }
        curr = head;
        while(curr)
        {
            if(curr->next&&curr->random)
            {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        
        curr=head;
        Node* new_head = curr->next;

        Node* new_curr = new_head;
        curr = head;
        while(curr&&new_curr)
        {
            if(curr->next&&curr->next->next)
            {
                curr->next = curr->next->next;
            }
            else
            {
                curr->next = nullptr;
            }
            if(new_curr&&new_curr->next&&new_curr->next->next)
            {
                new_curr->next = new_curr->next->next;
            }
            else
            {
                new_curr->next = nullptr;
            }
            curr = curr->next;
            new_curr = new_curr->next;
        }
        return new_head;


        /*
        // Time complexity: O(N)
        // Space complexity: O(N)
        unordered_map<Node*, Node*> map;
        if(!head)
        {
            return nullptr;
        }
        Node* curr = head;
        while(curr)
        {
            map[curr] = new Node(curr->val);
            curr=curr->next;
        }
        curr = head;
        while(curr)
        {
            map[curr]->next = map[curr->next];
            map[curr]->random = map[curr->random];
            curr = curr->next;
        }
        return map[head];        
        */
    }
};