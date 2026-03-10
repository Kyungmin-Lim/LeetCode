class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Time complexity: O(MxN)
        // Space complexity: O(1)
        bool rowZero = false;
        bool colZero = false;

        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0; i<row; i++)
        {
            if(matrix[i][0] == 0)
            {
                rowZero = true;
            }
        }

        for(int j=0; j<col; j++)
        {
            if(matrix[0][j]==0)
            {
                colZero = true;
            }
        }

        for(int i=1; i<row; i++)
        {
            for(int j=1; j<col; j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i=1; i<row; i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=0; j<col; j++)
                {
                    matrix[i][j]=0;
                }
            }
        }

        for(int j=1; j<col; j++)
        {
            if(matrix[0][j]==0)
            {
                for(int i=0; i<row; i++)
                {
                    matrix[i][j]=0;
                }
            }
        }

        if(rowZero)
        {
            for(int i=0; i<row; i++)
            {
                matrix[i][0] = 0;
            }
        }

        if(colZero)
        {
            for(int j=0; j<col; j++)
            {
                matrix[0][j]=0;
            }
        }




        /*
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

        */
    
    }
};