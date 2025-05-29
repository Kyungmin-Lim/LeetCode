class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack <char> Paren;
        string dst;
        int idx=0;

        int num = s.size();

        for(int i=0; i<num; i++)
        {
            if(s[i]=='(')
            {
                Paren.push(s[i]);     
            }
            else if(s[i] == ')')
            {
                if((!Paren.empty()) && (Paren.top()=='('))
                {
                    Paren.pop();
                }
                else
                {
                    continue;
                }
            }
            dst.push_back(s[i]);   
            cout << s[i];
        }

        if(Paren.empty())
        {
            return dst;
        }
        else
        {
            int del_num = Paren.size();
            for(int i=dst.size()-1; i>=0; i--)
            {
                if(del_num==0)
                {
                    break;
                }
                if(dst[i] == '(')
                {
                    dst.erase(i, 1);
                    del_num--;
                    //i--;
                }
                
            }
            return dst;
        }
        
        
    }
};