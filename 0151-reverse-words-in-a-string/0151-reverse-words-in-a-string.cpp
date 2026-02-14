class Solution {
public:
    string reverseWords(string s) {
        string result;
        
        int end = s.size()-1;
        int start = 0;

        while(end>=0)
        {
            while(end>=0 && s[end]==' ') end--;
            if(end<0)
            {
                break;;                
            }

            start = end;
            while(start>=0 && s[start]!=' ') start--;

            if(start!=end)
            {
                if(!result.empty()) result.push_back(' ');
                for(int i = start+1; i<end+1; i++)
                {
                    result.push_back(s[i]);
                }
                
                end = start;
            }    
            

        }
        return result;



        /*
        // Time complexity: O(N)
        // Space complexity: O(N)
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
        */
    }
};