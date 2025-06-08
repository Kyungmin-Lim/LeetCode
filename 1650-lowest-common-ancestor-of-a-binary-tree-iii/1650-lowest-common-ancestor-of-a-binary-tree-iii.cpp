/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {

        Node* a = p;
        Node* b = q;

        while(a!=b)
        {
            if(a==NULL)
            {
                a = q;
                //cout << a->val << endl;
            }
            else
            {
                a = a->parent;
                /*
                if(a==NULL)
                {
                    cout << "a=NULL" << endl;

                }
                else
                {
                    cout << a->val << endl;
                }
                */
            }
            

            if(b==NULL)
            {
                b = p;
                //cout << b->val << endl;
            }
            else
            {
                b = b->parent;
                /*
                if(b==NULL)
                {
                    cout << "b=NULL" << endl;

                }
                else
                {
                    cout << b->val << endl;
                }
                */
            }
            

            
        }
        return a;
        
    }
};