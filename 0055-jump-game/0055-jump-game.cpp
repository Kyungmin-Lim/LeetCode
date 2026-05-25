class Solution {
public:
    bool canJump(vector<int>& nums) {
        // Time complexity: O(N)
        // Space complexity: O(1)
        int maxJump=0;
        int n = nums.size();

        for(int i=0; i<n; i++)
        {
            if(i>maxJump)
            {
                return false;
            }
            maxJump=max(maxJump, nums[i]+i);
            if(maxJump>=n-1)
            {
                return true;
            }
        }
        return false;
        
    }
};