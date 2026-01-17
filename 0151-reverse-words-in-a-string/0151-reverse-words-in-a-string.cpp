class Solution {
public:
    string reverseWords(string s) {
        int num = s.size();
        stack<char> word;
        string result;

        for(int i=num-1; i>=0; i--)
        {
            if((s[i]==' ')&&(!word.empty()))
            {
                while(!word.empty())
                {
                    result.push_back(word.top());
                    word.pop();                
                }
                result.push_back(' ');
            }

            if(s[i]!=' ')
            {
                word.push(s[i]);
            }

        }

        while(!word.empty())
        {
            result.push_back(word.top());
            word.pop();                
        }
        num = result.size();
        if(result[num-1]==' ')
        {
            result.erase(num-1, 1);
        }
        return result;

        
    }
};