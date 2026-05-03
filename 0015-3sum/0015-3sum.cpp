class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i=0; i<n-2; i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int start=i+1;
            int end=n-1;
            while(start<end)
            {
                if(-1*nums[i] == nums[start]+nums[end])
                {
                    result.push_back({nums[i], nums[start], nums[end]});
                    end--;                    
                    start++;

                    while(nums[end] == nums[end+1] && start<end)
                    {
                        end--;
                    }
                    while(nums[start] == nums[start-1] && start<end)
                    {
                        start++;
                    }
                }
                else if(-1*nums[i] > nums[start]+nums[end])
                {
                    start++;
                    while(nums[start] == nums[start-1] && start<n-1)
                    {
                        start++;
                    }
                }
                else //(-1*nums[i] < nums[start]+nums[end])
                {
                    end--;
                    while(nums[end] == nums[end+1] && end>1)
                    {
                        end--;
                    }
                }


            }
           
        }
        return result;
        
    }
};