class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Time complexity: O(N)
        // Space complexity: O(1)
        
        int curr_sum = nums[0];
        int max_sum = curr_sum;
        int n = nums.size();

        for(int i=1; i<n; i++)
        {
            curr_sum = max(nums[i], nums[i] + curr_sum);
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
        
    }
};