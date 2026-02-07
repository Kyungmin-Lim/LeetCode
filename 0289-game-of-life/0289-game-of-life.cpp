class Solution {
public:
    int updateNeighbors(int i, int j, vector<vector<int>>& board){
        int w=board.size();
        int h=board[0].size();

        int Neighbors = 0;

        for(int ii = i-1; ii<=i+1; ii++)
        {
            for(int jj=j-1; jj<=j+1; jj++)
            {
                if(ii<0 || ii>=w || jj<0 || jj>= h)
                {
                    continue;
                }
                else
                {
                    if(ii==i && jj==j)
                    {
                        continue;
                    }
                    else
                    {
                        Neighbors += board[ii][jj];
                    }
                }
            }
        }

        return Neighbors;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int w=board.size();
        int h=board[0].size();
        int Neighbors=0;

        vector<vector<int>> copyboard = board;
        
        for(int i=0; i<w; i++)
        {
            for(int j=0; j<h; j++)
            {
                Neighbors = updateNeighbors(i, j, copyboard);
                cout << Neighbors << endl;

                if(board[i][j]==1) // live cell
                {
                    if(Neighbors<2)
                    {
                        board[i][j] = 0;
                    }
                    else if(Neighbors>3)
                    {
                        board[i][j] = 0;
                    }
                    else
                    {
                        continue;
                    }
                }
                else    // dead cell
                {
                    if(Neighbors==3)
                    {
                        board[i][j] = 1;
                    }
                }
            }
        }

        
    }
};