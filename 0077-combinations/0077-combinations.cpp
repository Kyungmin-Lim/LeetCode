class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        int start=1;
        vector<int> path;
        vector<vector<int>> result;

        backtracking(start, n, k, path, result);

        return result;        
    }
    void backtracking(int start, int n, int k, vector<int> &path, vector<vector<int>> &result)
    {   
        // Satisfied the final condition.
        if(path.size()==k)
        {
            result.push_back(path);
            return;
        }
        
        // for(int i=start; i<=n; i++)
        for(int i=start; i<=n-(k-path.size())+1; i++)
        {
            path.push_back(i);
            backtracking(i+1, n, k, path, result);
            path.pop_back();
        }
    }

};