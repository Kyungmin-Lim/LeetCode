class Solution {
public:
    int hammingWeight(int n) {
        /*
        // Time complexity: O(log2n)
        // Space complexity: O(1)
        int chk=1;
        int result = 0;

        while(n>0)
        {
            if(n & chk)
            {
                result++;
            }
            n = n >> 1;
        }
        return result;
        */


        // Time complexity: O(k) k is the number of 1' bits
        // Space complexity: O(1)
        int result=0;

        while(n>0)
        {
            n = n & (n-1);
            result++;
        }
        return result;

        
    }
};