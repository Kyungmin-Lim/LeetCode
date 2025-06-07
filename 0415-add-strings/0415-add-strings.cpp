class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();

        int carry=0;

        int val1, val2, val;
        string result;
        while((n1>=1)||(n2>=1)||(carry!=0))
        {
            if(n1<1)
            {
                val1 = 0;
            }
            else
            {
                val1 = num1[n1-1]-'0';
            }

            if(n2<1)
            {
                val2 = 0;
            }
            else
            {
                val2 = num2[n2-1]-'0';
            }


            val = (val1+val2+carry)%10;
            carry = (val1+val2+carry)/10;
            result.push_back(val+'0');

            n1--;
            n2--;
        }
        reverse(result.begin(), result.end());
        return result;
        
    }
};