class Solution {
public:
    string longestPalindrome(string s) {
        // Time complexity: O(N^2)
        // Space coplexity: O(1)
        string result;
        int len = 0;
        int idx_s = 0;
        int idx_e = 0;

        for(int i=0; i<s.size(); i++)
        {
            // single character check
            if(i>0 && i<s.size()-1)
            {
                int i_start = i-1;
                int i_end = i+1;
                while(i_start>=0 && i_end<s.size())
                {
                    if(s[i_start] == s[i_end])
                    {
                        int tmp_len = i_end-i_start+1;
                        if(tmp_len>len)
                        {
                            len = tmp_len;
                            idx_s = i_start;
                            idx_e = i_end;
                        }
                        i_start--;
                        i_end++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            // two characters check
            if(i+1 < s.size() && s[i]==s[i+1])
            {
                int tmp_len = 2;
                int i_start = i;
                int i_end = i+1;
                
                if(tmp_len > len)
                {
                    len = tmp_len;
                    idx_s = i_start;
                    idx_e = i_end;
                }
                i_start--;
                i_end++;
                
                while(i_start>=0 && i_end<s.size())
                {
                    if(s[i_start] == s[i_end])
                    {
                        int tmp_len = i_end-i_start+1;
                        if(tmp_len>len)
                        {
                            len = tmp_len;
                            idx_s = i_start;
                            idx_e = i_end;
                        }
                        i_start--;
                        i_end++;
                    }
                    else
                    {
                        break;
                    }
                }

            }
        }

        if(len>1)
        {
            for(int i=0; i<len; i++)
            {
                result.push_back(s[idx_s]);
                idx_s++;
            }

        }
        else
        {
            result.push_back(s[0]);
        }
        cout << len << endl;
        return result;
        
    }
};