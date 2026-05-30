class Solution {
public:
    /*
    // Default mehod using memoization and DP
    // Time complexity: O(N)
    // Space complexity: O(N)
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
    */

    // Time complexity: O(N)
    // Space complexity: O(1)
    int climbStairs(int n) {
        if(n<=2)
        {
            return n;
        }

        
        int prev1 = 2; // distinct ways to reach step 2
        int prev2 = 1; // distinct ways to reach step 1
        int curr = 0;

        for(int i=3; i<=n; i++)
        {
            curr = prev1 + prev2;
            
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;


    }
};