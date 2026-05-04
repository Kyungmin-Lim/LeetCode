class Solution {
public:
    bool isValid(string s) {
        stack<char> buff;
        int n = s.size();

        for(int i=0; i<n; i++)
        {
            if(buff.empty())            
            {
                if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
                {
                    buff.push(s[i]);
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
                {
                    buff.push(s[i]);
                }
                else
                {
                    char tmp = buff.top();
                    
                    if(s[i]==')' && tmp=='(')
                    {
                        buff.pop();
                    }
                    else if(s[i]=='}' && tmp=='{')
                    {
                        buff.pop();
                    }
                    else if(s[i]==']' && tmp=='[')
                    {
                        buff.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        if(buff.empty())
        {
            return true;
        }
        else
        {
            return false;
        }

        
        
    }
};