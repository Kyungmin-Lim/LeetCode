class Solution {
public:
    bool isPalindrome(int x) {
        // Time complexity: O(N) - N is the digits of number
        // Space complexity: O(1)
                
        long long rev=0;
        long long num = x;
        
        if(num<0)
        {
            return false;
        }

        while(num!=0)
        {
            rev = rev*10 + num%10;
            num = num/10;
        }

        if(rev == x)
        {
            return true;
        }
        else
        {
            return false;
        }

        
    }
};