class Solution {
public:
    int hammingWeight(int n) {
        long long chk=1;
        int result = 0;

        while(chk<=n)
        {
            if(n & chk)
            {
                result++;
            }
            chk = chk << 1;
        }
        return result;
        
    }
};