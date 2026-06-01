class Solution {
public:
    string minWindow(string s, string t) {
        int num = s.size();
        string result;
        int char_num[128]={0};
        int right=0;
        int left=0;
        int required=0;
        int min_length=INT_MAX;
        int min_left = -1;
        

        if(num<t.size())
        {
            return "";
        }

        for(int i=0; i<t.size(); i++)
        {
            char i_char = t[i];
            char_num[i_char]++;
            required++;
        }


        for(int right=0; right<num; right++)
        {
            char tmp = s[right];
            
            if(char_num[tmp]>0)
            {
                required--;
            }
            char_num[tmp]--;

            while(required==0)
            {
                if(right-left+1 < min_length)
                {
                    min_length = right-left+1;
                    min_left = left;
                }

                char tmp = s[left];
                char_num[tmp]++;
                if(char_num[tmp]>0)
                {
                    required++;
                }
                left++;
            }
        }
        if(min_left == -1)
        {
            return "";
        }
        result = s.substr(min_left, min_length);
        return result;
        
        
    }
};