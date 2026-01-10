class Solution {
public:
    int climbStairs(int n, unordered_map<int, int>&memo){
        if((n>2)&&(memo.find(n)==memo.end()))
        {
            memo[n] = climbStairs(n-1, memo)+climbStairs(n-2, memo);
        }
        else if(n==2)
        {
            return 2;
        }
        else if(n==1)
        {
            return 1;
        }
        return memo[n];
    }



    int climbStairs(int n) {
        unordered_map<int, int> memo;
        return climbStairs(n, memo);
        // if(n>2)
        // {
        //     return (climbStairs(n-1)+climbStairs(n-2));
        // }
        // else if(n==2)
        // {
        //     return 2;
        // }
        // return 1;
        
    }
};