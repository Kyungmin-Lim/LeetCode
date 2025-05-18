class Solution {
public:
    string intToRoman(int num) {
        // 1<= num <= 3999

        int val=0;
        string dst;

        val = int(num/1000);
        num = num-val*1000;
        for(int i=0; i<val; i++)
        {
            dst.append("M");                
        }
        


        val = int(num/100);
        num = num-val*100;
        if(val==4)
        {
            dst.append("CD");
        }
        else if(val==9)
        {
            dst.append("CM");
        }
        else
        {
            if(val>=5)
            {
                dst.append("D");
                val -= 5;
            }

            for(int i=0; i<val; i++)
            {
                dst.append("C");                
            }
        }
        


        val = int(num/10);
        num = num-val*10;
        if(val==4)
        {
            dst.append("XL");
        }
        else if(val==9)
        {
            dst.append("XC");
        }
        else
        {
            if(val>=5)
            {
                dst.append("L");
                val -= 5;
            }

            for(int i=0; i<val; i++)
            {
                dst.append("X");                
            }
        }
        


        val = num;
        if(val==4)
        {
            dst.append("IV");
        }
        else if(val==9)
        {
            dst.append("IX");
        }
        else
        {
            if(val>=5)
            {
                dst.append("V");
                val -= 5;
            }
            for(int i=0; i<val; i++)
            {
                dst.append("I");                
            }
        }

        return dst;

    }
};