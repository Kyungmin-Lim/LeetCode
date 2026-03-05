class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Time complexity: O(N)
        // Space complexity: O(1)


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
                left = lastPos[idx]+1; // This part is very interesting. left should go to just +1 after duplicated character index.
                lastPos[idx] = right;
            }
        }
        return result;
        
    }
};