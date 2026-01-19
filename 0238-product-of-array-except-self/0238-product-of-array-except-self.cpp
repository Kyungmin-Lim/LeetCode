class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Time complexity: O(N)
        // Space complexity: O(N)

        
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        prefix[0] = 1;
        suffix[n-1] = 1;

        vector<int> result(n);

        for(int i=1; i<n; i++)
        {
            prefix[i] = prefix[i-1]*nums[i-1];
            suffix[n-i-1] = suffix[n-i]*nums[n-i];
        }

        for(int i=1; i<n-1; i++)
        {
            result[i] = prefix[i]*suffix[i]; 
        }
        result[0] = suffix[0];
        result[n-1] = prefix[n-1];

        return result;
               
    }
};