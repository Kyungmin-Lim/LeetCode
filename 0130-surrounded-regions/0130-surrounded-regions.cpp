class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==0||i==row-1||j==0||j==col-1)
                {
                    if(board[i][j]=='O')
                    {                     
                        dfs(board, i, j);
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(board[i][j]=='#')
                {
                    board[i][j] = 'O';
                }
                else if(board[i][j]=='O')
                {
                    board[i][j] = 'X';
                }
            }
        }
    }
    void dfs(vector<vector<char>>& board, int r, int c)
    {
        int row = board.size();
        int col = board[0].size();

        if(r>=0 && r<row && c>=0 && c<col)
        {
            if(board[r][c]=='O')
            {
                board[r][c] = '#';
            }
            else
            {
                return;
            }
        }
        else
        {
            return;
        }

        int dr[4] = {0, 0, 1, -1};
        int dc[4] = {1, -1, 0, 0};

        for(int i=0; i<4; i++)
        {
            int currRow = r+dr[i];
            int currCol = c+dc[i];

            dfs(board, currRow, currCol);            
        }
    }
};