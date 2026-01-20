class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        
        // Time complexity: O(N^2)
        // Space complexity: O(1)

        for(int i=0; i<n-2; i++)
        {
            if((i>0)&&(nums[i]==nums[i-1]))
            {
                continue;
            }
            if(nums[i]>0)
            {
                break;
            }
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    result.push_back({nums[i], nums[j], nums[k]});
                    while((j<k)&&(nums[j]==nums[j+1])) j++;
                    while((j<k)&&(nums[k]==nums[k-1])) k--;
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }            
        }

        return result;

        
    }
};