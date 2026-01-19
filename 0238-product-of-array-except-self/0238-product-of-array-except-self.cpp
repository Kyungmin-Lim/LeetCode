class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> prefix(n, nums[0]) ;
        vector<int> suffix(n, nums[n-1]);

        vector<int> result(n, 1);

        for(int i=1; i<n; i++)
        {
            prefix[i] = prefix[i-1]*nums[i];
            suffix[n-i-1] = suffix[n-i]*nums[n-i-1];
        }

        for(int i=1; i<n-1; i++)
        {
            result[i] = prefix[i-1]*suffix[i+1]; 
        }
        result[0] = suffix[1];
        result[n-1] = prefix[n-2];

        return result;        
    }
};