class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==right)
        {
            return left;
        }
        else
        {
            int digit_left = (left==0)? 1: floor(log(left))+1;
            int digit_right = (right==0)? 1: floor(log(right))+1;
            
            if(digit_left+1<digit_right)
            {
                right = left<<1;
            }
        }
        int result=left;
        for(long long i=left+1; i<=right; i++)
        {
            result = result&i;
        }

        return result;
    }
};