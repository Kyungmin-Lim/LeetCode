class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==right)
        {
            return left;
        }
        int result = 0;
        int left_num = (left==0)? 1: log(left)+1;
        int count = 0;
        while(left!=0)
        {           
            if(right == left)
            {
                result += 1<<count;
            }
            left = left>>1;
            right = right>>1;
            count++;
        }  
        return result;      
    }
};