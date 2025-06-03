class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix;

        unordered_map<int, int> accum_sum;

        prefix.push_back(nums[0]);
        for(int i=1; i<n; i++)
        {
            prefix.push_back(prefix[i-1] + nums[i]);
        }

        int count=0;
        for(int i=0; i<n; i++)
        {
            if(prefix[i]==k)
            {
                count++;
            }
            
            if(accum_sum.find(prefix[i]-k) != accum_sum.end())
            {

                count+=accum_sum[prefix[i]-k];
            }
            accum_sum[prefix[i]]++;
        }

        return count;



    }
};