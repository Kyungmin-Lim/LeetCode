class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int row = 0;
        int col = 0;        
        int chk = 0;        
        
        for(int i=row; i<board.size(); i++)        
        {
            for(int j=col; j<board[0].size(); j++)
            {
                if(backtracking(chk, i, j, board, word))
                {
                    return true;
                }
            }
        }


        return false;
    }
    bool backtracking(int chk, int row, int col, vector<vector<char>>& board, string& word)
    {        
        if(chk == word.size())
        {            
            return true;
        }

        if(row<0 || row>=board.size() || col<0 || col>=board[0].size())
        {
            return false;
        }

        bool found = false;
        if(board[row][col]==word[chk])
        {
            char tmp = word[chk];
            board[row][col] = '#'; // check this position as visited.

            found = backtracking(chk+1, row+1, col, board, word)||
                    backtracking(chk+1, row, col+1, board, word)||
                    backtracking(chk+1, row-1, col, board, word)||
                    backtracking(chk+1, row, col-1, board, word);

            board[row][col] = tmp; // check this position as not-visited.

        }
        return found;
    }
};