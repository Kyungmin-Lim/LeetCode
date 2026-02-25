class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int row = board.size();
        int col = board[0].size();

        bool Row[9][9] = {false};
        bool Col[9][9] = {false};
        bool SubBox[3][3][9] = {false};

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(board[i][j]=='.')
                {
                    continue;
                }
                int val = board[i][j]-'1';

                if(Row[i][val])
                {
                    return false;
                }
                Row[i][val] = true;

                if(Col[val][j])
                {
                    return false;
                }
                Col[val][j] = true;

                int idx_x = i/3;
                int idx_y = j/3;
                if(SubBox[idx_x][idx_y][val])
                {
                    return false;
                }
                SubBox[idx_x][idx_y][val] = true;
            }
        }
        return true;


/*
        // Time complexity: O(3x9x9)=O(N)        
        // Space complexity: O(1)
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
        */
    }

/*
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
*/

};