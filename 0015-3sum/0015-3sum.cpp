class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Time complexity: O(N^2)
        // Space complexity: O(1) or O(logN) system memory for sorting
        vector<vector<int>> result;

        if(nums.size()<3)
        {
            return result;
        }
        int start = 1;
        int end = nums.size()-1;

        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-2; i++)
        {
            start = i+1;
            end = nums.size()-1;

            if(i-1>=0 && nums[i]==nums[i-1])
            {
                continue;
            }
            while(start<end)
            {
                int sum = nums[i]+nums[start]+nums[end];
                if(sum == 0)
                {
                    result.push_back({nums[i], nums[start], nums[end]});
                    start++;
                    end--;

                    while(start<end && nums[start]==nums[start-1])
                    {
                        start++;
                    }
                    while(start<end && nums[end]==nums[end+1])
                    {
                        end--;
                    }
                }
                else if(0 < sum)
                {
                    end--;
                }
                else
                {
                    start++;
                }               

            }
        }
        return result;
        
    }
};