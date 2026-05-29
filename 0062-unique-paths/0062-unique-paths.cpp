class Solution {
public:
    
    int getPaths(int r, int c, int m, int n, vector<vector<int>>& memo){
        if(r == m-1 && c == n-1)
        {
            return 1;
        }

        if(r>=m || c>=n)
        {
            return 0;
        }

        if(memo[r][c] != -1)
        {
            return memo[r][c];
        }

        memo[r][c] = getPaths(r+1, c, m, n, memo) + getPaths(r, c+1, m, n, memo);
        return memo[r][c];
    }

    int uniquePaths(int m, int n) {

        // 2차원 벡터 정의하는 방법 익히기.
        vector<vector<int>> memo(m, vector<int>(n, -1));

        return getPaths(0, 0, m, n, memo);
        
    }
};