class Solution {
public:
    char convert(char s)
    {
        if(s == '(')
        {
            return ')';
        }
        else if(s == '{')
        {
            return '}';
        }
        else if(s == '[')
        {
            return ']';
        }
        else
        {
            return '0';
        }
    }



    bool isValid(string s) {

        int num = s.size();
        if(num <= 1)
        {
            return false;
        }

        stack<char> bracket;
        char tmp;

        for(int i=0; i<num; i++)
        {
            tmp = convert(s[i]);

            if(bracket.empty())
            {
                if(tmp=='0')
                {
                    return false;
                }
                else
                {
                    bracket.push(tmp);
                }                                    
            }
            else
            {
                 if(bracket.top() == s[i])
                {
                    bracket.pop();
                    cout << "pop: " << s[i] << endl;
                }
                else
                {                    
                    bracket.push(tmp);
                    cout << "push: " << tmp << endl;
                }

            }
            
            
           
        }
        if(bracket.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};