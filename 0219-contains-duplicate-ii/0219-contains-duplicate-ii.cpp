class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // Time complexity: O(N)
        // Space complexity: O(N)
        unordered_map<int, int> map;
        int dist=INT_MAX;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(map.find(nums[i]) != map.end())
            {
                if(abs(i - map[nums[i]]) < dist)
                {
                    dist = abs(i - map[nums[i]]);
                    if(dist <= k)
                    {
                        return true;
                    }
                }                
            }
            map[nums[i]] = i;
        }

        if(dist <= k)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
};