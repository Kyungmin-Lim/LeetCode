class Solution {
public:
    int reverseBits(int n) {
        // Time complexity: O(32)=O(1)
        // Space complexity: O(1)
        int result = 0;

        for(int i=0; i<32; i++)
        {
            result = result<<1;
            result += (1 & n);            
            n = n>>1;
        }
        return result;
        
    }
};