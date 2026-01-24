class Solution {
public:
    int DigitSum(int n){
        int sum=0;
        int i=0;
        while(n!=0)
        {
            i = n%10;            
            sum+= i*i;            
            n = n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int key = n;
        int sum=0;

        int fast=n;
        int slow=n;

        while(true)
        {
            slow = DigitSum(slow);
            fast = DigitSum(fast);
            fast = DigitSum(fast);

            if((slow==1)||(fast==1))
            {
                return true;
            }
            else if(fast==slow)
            {
                return false;
            }
        }        
        return true; 
    }
};