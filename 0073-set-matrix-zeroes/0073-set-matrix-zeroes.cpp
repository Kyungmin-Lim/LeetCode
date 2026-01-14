class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        set<int> low, col;

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j]==0)
                {
                    low.insert(i);
                    col.insert(j);
                }
            }
        }

        for(auto it : low)
        {
            for(int j=0; j<n; j++)
            {
                matrix[it][j] = 0;
            }
        }

        for(int i=0; i<m; i++)
        {
            for(auto it:col)
            {
                matrix[i][it] = 0;
            }
        }

        
    }
};