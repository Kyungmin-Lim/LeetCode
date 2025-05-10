class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = 0;
        int head, tail;
        int num = 0;
        cout << "size: " << s.size() << endl;
        while((start + end) < s.size()-1)
        {
            head = 0;
            if(s[start]>='A' && s[start]<='Z')
            {
                head = s[start] - 'A' + 'a';
            }
            else if(s[start]>='a' && s[start]<='z')
            {
                head = s[start];
            }
            else if(s[start]>='0' && s[start]<='9')
            {
                head = s[start];
            }
            else
            {
                start++;
                continue;
            }

            tail = 0;
            if(s[s.size()-1-end]>='A' && s[s.size()-1-end]<='Z')
            {
                tail = s[s.size()-1-end] - 'A' + 'a';
            }
            else if(s[s.size()-1-end]>='a' && s[s.size()-1-end]<='z')
            {
                tail = s[s.size()-1-end];
            }
            else if(s[s.size()-1-end]>='0' && s[s.size()-1-end]<='9')
            {
                tail = s[s.size()-1-end];
            }
            else
            {
                end++;
                continue;
            }

            if(head == tail)
            {

                num++;
                cout << "(start, end): " << "(" << start << ", "<< end << ")";
                cout << "   " << head << "   " << tail << endl;

                start++;
                end++;
                
                            }
            else
            {
                return false;
            }
        }
        cout << "hello" << endl;
        return true;

    }
};