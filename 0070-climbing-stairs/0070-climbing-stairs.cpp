class Solution {
public:
    int getWay(int n, vector<int>& memo)
    {
        if(n<=2)
        {
            memo[n-1] = n;
        }

        if(memo[n-1] != -1)
        {
            return memo[n-1];
        }

        memo[n-1] = getWay(n-1, memo) + getWay(n-2, memo);
        return memo[n-1];
    }
    int climbStairs(int n) {
        vector<int> memo(n, -1);

        return getWay(n, memo);
        
    }
};