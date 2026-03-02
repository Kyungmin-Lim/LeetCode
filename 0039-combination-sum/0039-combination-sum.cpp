class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> path;
        int sum = 0;

        backtracking(0, candidates, path, sum, result, target);

        return result;        
    }
    void backtracking(int start, vector<int>& candidates, vector<int>& path, int sum, vector<vector<int>>& result, int target)
    {

        if(sum==target)
        {
            result.push_back(path);
            return;
        }

        if(sum>target)
        {
            return;
        }

        for(int i=start; i<candidates.size(); i++)
        {
            path.push_back(candidates[i]);
            sum += candidates[i];

            backtracking(i, candidates, path, sum, result, target);

            sum -= candidates[i];
            path.pop_back();
        }
    }
};