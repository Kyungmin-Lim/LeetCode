class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int num = intervals.size();
        int i=0;
        vector<vector<int>> result;

        if(intervals.empty())
        {
            result.push_back({newInterval[0], newInterval[1]});
            return result;
        }

        
        

        while(i<num && intervals[i][1]<newInterval[0])
        {
            result.push_back({intervals[i][0], intervals[i][1]});
            i++;
        }

        // int start = min(newInterval[0], intervals[i][0]);
        // int end = max(newInterval[1], intervals[i][1]);
        int start = newInterval[0];
        int end = newInterval[1];


        while(i<num && newInterval[1]>=intervals[i][0])
        {
            start = min(start, intervals[i][0]);
            end = max(end, intervals[i][1]);
            i++;
        }        

        result.push_back({start, end});

        while(i<num)
        {
            result.push_back({intervals[i][0], intervals[i][1]});
            i++;
        }

        return result;
    }
};