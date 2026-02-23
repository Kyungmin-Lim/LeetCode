class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();

        for(int i=0; i<row; i++)
        {
            if(!isValidRow(board, i))
            {
                return false;
            }            
        }
        for(int i=0; i<col; i++)
        {
            if(!isValidCol(board, i))
            {
                return false;
            }            
        }
        // Find whether 3x3 sub-boxes is valid or not.
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(!isValidSub(board, i, j))
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool isValidRow(vector<vector<char>>& board, int row)
    {
        vector<char> mat(9, 0);
        for(int i=0; i<9; i++)
        {
            char val = board[row][i];
            if(val=='.')
            {
                continue;
            }
            int idx = val-'1';
            mat[idx]++;

            if(mat[idx]>1)
            {
                return false;
            }
        }
        return true;
    }
    bool isValidCol(vector<vector<char>>& board, int col)
    {
        vector<char> mat(9, 0);
        for(int i=0; i<9; i++)
        {
            char val = board[i][col];
            if(val=='.')
            {
                continue;
            }
            int idx = val-'1';
            mat[idx]++;

            if(mat[idx]>1)
            {
                return false;
            }
        }
        return true;        
    }
    bool isValidSub(vector<vector<char>>& board, int subR, int subC)
    {
        vector<char> mat(9, 0);

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                int idx_x = subR*3+i;
                int idx_y = subC*3+j;

                char val = board[idx_x][idx_y];
                if(val=='.')
                {
                    continue;
                }
                int idx = val-'1';
                mat[idx]++;
                if(mat[idx]>1)
                {
                    return false;
                }
            }
        }
        return true;

    }
};