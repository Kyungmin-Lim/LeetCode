class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        int num = s.size();

        stack<char> stk;

        

        for(int i=0; i<num; i++)
        {            
            if(!stk.empty()&&(stk.top()=='(')&&(s[i]==')'))
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
        return stk.size();
        
    }
};