class Solution {
public:
    int lengthOfLastWord(string s) {
        int num = s.size();
        int len=0;
        for(int i=num-1; i>=0; i--)
        {
            
            if((s[i]==' ')&&(len!=0))
            {
                break;                
            }

            if(s[i]!=' ')
            {
                len++;
            }
        }
        return len;
    }
};