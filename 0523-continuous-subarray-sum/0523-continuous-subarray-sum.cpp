class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int prefix_mode=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            prefix_mode = (prefix_mode + nums[i]) % k;

            if(map.find(prefix_mode)!=map.end())
            {
                if(i-map[prefix_mode]>1)
                {
                    return true;
                }
            }
            else
            {
                map[prefix_mode] = i;
            }
        }
        return false;
        
    }
};