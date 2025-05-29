class Solution {

private:
    bool isPalindrome(string s, int left, int right)
    {
        int num = s.size();
        
        while(left<right)
        {
            if(s[left]!=s[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

public:
    bool validPalindrome(string s) {
        int num = s.size();
        int left = 0;
        int right = num-1;
        while(left<right)
        {
            if(s[left]!=s[right])
            {
                return (isPalindrome(s, left+1, right) || isPalindrome(s, left, right-1));
            }
            left++;
            right--;
        }
        return true;
    }
};