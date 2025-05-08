class Solution {
public:
    int strStr(string haystack, string needle) {
        int num_needle = needle.size();
        int chk = 0;
        for(int i=0; i<haystack.size(); i++)
        {
            chk = 0;
            for(int j=0; j<num_needle; j++)
            {
                if(haystack[j+i] == needle[j])
                {
                    chk++;
                }
                else
                {                    
                    break;
                }
            }
            if(chk == num_needle)
            {
                return i;
            }

        }
        return -1;
    }
};