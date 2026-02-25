class Solution {
public:
    int trailingZeroes(int n) {
        
        int div = 5;
        int result = 0;
        while(n>=div)
        {
            result += n/div;
            n = n/div;
        }

        return result;
        
    }
};