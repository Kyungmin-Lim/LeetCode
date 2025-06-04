class Solution {
private:
    vector<pair<int, int>> dir={
        {1, 0}, 
        {0, 1},
        {-1, 0},
        {0, -1},
        {-1, -1},
        {-1, 1},
        {1, -1},
        {1, 1}
    };
    bool isValid(int x, int y, int n, vector<vector<int>>&mat)
    {
        return (x>=0)&&(x<n)&&(y>=0)&&(y<n)&&(mat[x][y]==0);
    }

public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>>visit(n, vector<int>(n, -1));
        queue<pair<int, pair<int, int>>>q;

        if((grid[0][0]==1)||(grid[n-1][n-1]==1))
        {
            return -1;
        }

        int x=0;
        int y=0;
        
        q.push({1, {0, 0}});
        //visit[x][y]=0;

        while(!q.empty())
        {
            auto [d, p] = q.front();
            auto [x, y] = p;
            visit[x][y] = d;
            q.pop();
            for (auto [dx, dy]: dir)
            {
                int newX = x+dx;
                int newY = y+dy;
                if(isValid(newX, newY, n, grid) && visit[newX][newY]==-1)
                {
                    visit[newX][newY] = d+1;
                    q.push({d+1, {newX, newY}});

                }
            }
        }
        return visit[n-1][n-1];
    }
};