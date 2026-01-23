class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> result;

        // Time complexity: O(NlogN) + O(N) = O(NlogN)
        // Space complexity: O(1)
        sort(intervals.begin(), intervals.end());

        for(auto interval:intervals)
        {
            if(result.empty() || result.back()[1] < interval[0])
            {
                result.push_back(interval);
            }
            else
            {
                result.back()[1] = max(result.back()[1], interval[1]);
                //result.back()[1] = interval[1];
            }
        }
        return result;
        
    }
};