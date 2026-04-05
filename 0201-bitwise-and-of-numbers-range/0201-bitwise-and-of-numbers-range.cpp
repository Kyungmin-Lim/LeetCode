class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==right)
        {
            return left;
        }
        int result = 0;
        int count = 0;
        while(left!=0)
        {           
            if(right == left)
            {
                result = left<<count;
                break;
            }
            left = left>>1;
            right = right>>1;
            count++;
        }  
        return result;      
    }
};