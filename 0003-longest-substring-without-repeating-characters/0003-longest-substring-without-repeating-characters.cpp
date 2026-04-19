class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Time complexity: O(N)
        // Space complexity: O(min(N, M)) - N is the length of string, M is the number of unique characters.

        int length = 0;
        unordered_map<char, int> m;
        int right=0; 
        int left=0;

        for(int i=0; i<s.size(); i++)
        {
            right = i;                
            if(m.find(s[i])!=m.end())
            {
                if(m[s[i]]>=left)
                {
                    left = m[s[i]]+1;
                }
            }

            m[s[i]] = i;

            int curr_len = right-left+1;
            length = max(length, curr_len);

        }
        
        return length;

        
    }
};