class Solution {
public:
    string reverseWords(string s) {
        stack<string> buffer;
        string word;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                if(word.empty())
                {
                    continue;
                }
                else
                {
                    buffer.push(word);
                    word.clear();
                }
            }
            else
            {
                word.push_back(s[i]);
            }            
        }
        if(!word.empty())
        {
            buffer.push(word);
            word.clear();
        }
        
        string result;
        if(buffer.empty())
        {
            return result;
        }
        int num = buffer.size();
        for(int i=0; i<num; i++)
        {
            string tmp = buffer.top();
            cout << tmp << endl;
            for(int j=0; j<tmp.size(); j++)
            {
                result.push_back(tmp[j]);
            }            
            if(i!= num-1)
            {
                result.push_back(' ');
            }
            buffer.pop();
        }
        return result;
        
    }
};