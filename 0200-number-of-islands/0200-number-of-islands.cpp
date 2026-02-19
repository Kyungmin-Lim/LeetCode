class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        // BFS solution
        int row = grid.size();
        int col = grid[0].size();
        int result = 0;

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]=='1')
                {
                    result++;
                    bfs(grid, i, j);
                }
            }
        }
        return result;



        /*
        // DFS solution
        // Time complexity: O(NxM)
        // Space complexity: O(1)

        int row = grid.size();
        int col = grid[0].size();
        int result = 0;

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]=='1')
                {
                    result++;
                    dfs(grid, i, j);
                }
            }
        }
        return result;
        */
    }

    void bfs(vector<vector<char>>& grid, int r, int c)
    {
        int row = grid.size();
        int col = grid[0].size();

        queue<pair<int, int>> q;
        q.push({r, c});
        grid[r][c]='0';

        while(!q.empty())
        {
            int num = q.size();
            for(int i=0; i<num; i++)
            {
                pair<int, int> curr = q.front();
                q.pop();                

                if(curr.first-1 >= 0 && grid[curr.first-1][curr.second]=='1')
                {
                    q.push({curr.first-1, curr.second});                    
                    grid[curr.first-1][curr.second] = '0';
                }
                if(curr.first+1 < row && grid[curr.first+1][curr.second]=='1')
                {
                    q.push({curr.first+1, curr.second});  
                    grid[curr.first+1][curr.second] = '0';                  
                }
                if(curr.second-1 >= 0 && grid[curr.first][curr.second-1]=='1')
                {
                    q.push({curr.first, curr.second-1});                    
                    grid[curr.first][curr.second-1] = '0';
                }
                if(curr.second+1 < col && grid[curr.first][curr.second+1]=='1')
                {
                    q.push({curr.first, curr.second+1});                    
                    grid[curr.first][curr.second+1] = '0';
                }
            }
        }




    }
    /*
    void dfs(vector<vector<char>>& grid, int r, int c)
    {
        int row = grid.size();
        int col = grid[0].size();

        if(r<0 || r>=row || c<0 || c>=col || grid[r][c]=='0')
        {
            return;
        }
        grid[r][c]='0';

        dfs(grid, r-1, c);
        dfs(grid, r+1, c);
        dfs(grid, r, c-1);
        dfs(grid, r, c+1);
    }
    */
};