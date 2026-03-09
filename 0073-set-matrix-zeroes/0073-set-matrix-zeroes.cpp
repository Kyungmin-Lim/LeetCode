class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Time complexity: O(MxN)
        // Space complexity: O(M+N) - Big O notation is calculated as we meet the worst case. 
        // There is constant space solution!!!
        
        set<int> row;
        set<int> col;

        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        while(!row.empty())
        {
            int r = *row.begin();
            for(int j=0; j<matrix[0].size(); j++)
            {
                matrix[r][j] = 0;
            }
            row.erase(row.begin());
        }
        
        while(!col.empty())
        {
            int c = *col.begin();
            for(int i=0; i<matrix.size(); i++)
            {
                matrix[i][c] = 0;
            }
            col.erase(col.begin());
        }

        
    
    }
};