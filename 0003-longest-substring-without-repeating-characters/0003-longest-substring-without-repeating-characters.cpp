class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastPos(128, -1);
        int result = 0;
        int right=0;
        int left=0;
        for(right=0; right<s.size(); right++)
        {
            int idx = s[right];

            if(lastPos[idx]<left)
            {
                result = max(result, right-left+1);
                lastPos[idx] = right;
            }
            else
            {                
                left = lastPos[idx]+1;
                lastPos[idx] = right;
            }
        }
        return result;
        
    }
};