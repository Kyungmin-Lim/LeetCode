class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num = digits.size();
        bool new_digit=false;

        for(int i=num-1; i>=0; i--)
        {
            if(digits[i]+1 > 9)
            {
                digits[i] = (digits[i]+1)%10;
                if(i==0)
                {
                    new_digit = true;
                }
            }
            else
            {
                digits[i] += 1;
                break;
            }
        }
        if(new_digit == true)
        {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};