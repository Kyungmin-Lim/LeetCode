class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // Time complexity: O(n x nPn) : n is the number of elements in nums
        // Space complexity: O(2n): spaces for bool and path

        int N = nums.size();
        
        vector<int> path;
        vector<vector<int>> result;
        vector<bool> used(N, false);

        backtracking(N, used, nums, path, result);    
        return result;  
    }
    void backtracking(int n, vector<bool> &used, vector<int>& nums, vector<int>& path, vector<vector<int>>& result)
    {
        if(path.size()==n)
        {
            result.push_back(path);
            return;
        }

        for(int i=0; i<n; i++)
        {
            if(!used[i])
            {
                path.push_back(nums[i]);
                used[i] = true;
                backtracking(n, used, nums, path, result);

                used[i] = false;
                path.pop_back();
            }         
        }
    }
};