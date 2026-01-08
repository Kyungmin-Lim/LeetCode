class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0) // negative num can not be palindrome.
        {
            return false;
        }
        
        long rev = 0;
        int num = x;

        while(num)
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