class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Time complexity: O(NlogN)
        // Space complexity: O(logN) - logN is needed for call stack for using sort function.
        vector<vector<int>> result;

        sort(intervals.begin(), intervals.end());

        for(const auto& interval:intervals)
        {
            if(result.empty() || result.back()[1] < interval[0])
            {
                result.push_back(interval);
            }
            else
            {
                result.back()[1] = max(result.back()[1], interval[1]);
            }
        }
        return result;

        
    }
};