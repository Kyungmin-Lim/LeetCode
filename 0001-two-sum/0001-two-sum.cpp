class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        // Time complexity: O(NlogN)
        // Space complexity: O(N)
        vector<pair<int, int>> vec;
        
        for(int i=0; i<nums.size(); i++)
        {
            vec.push_back({nums[i], i});
        }

        sort(vec.begin(), vec.end());
        int start = 0;
        int end = nums.size()-1;

        while(start<end)
        {
            if(vec[start].first+vec[end].first > target)
            {
                end--;
            }
            else if(vec[start].first+vec[end].first < target)
            {
                start++;
            }
            else 
            {
                break;
            }
        }
        return {vec[start].second, vec[end].second};
        */

        // Time complexity: O(N) 알고리즘이 있음 - hashmap
        // Space complexity: O(N)

        unordered_map<int, int> map;

        for(int i=0; i<nums.size(); i++)
        {
            int remain = target-nums[i];
            if(map.find(remain) != map.end())
            {
                return {i, map[remain]};
            }

            map[nums[i]] = i;
        }
        return {};


        
    }
};