class Solution {
public:
    string minWindow(string s, string t) {
        int count_char[128]={0};
        int required = 0;
        int right=0;
        int left=0;
        int num = s.size();
        int min_left = -1;
        int min_length = INT_MAX;
        string result;
        

        if(num<t.size())
        {
            return "";
        }

        for(int i=0; i<t.size(); i++)
        {
            int index = t[i];

            count_char[index]++;
            required++;
        }
        for(int right=0; right<num; right++)
        {
            char right_char = s[right];
            if(count_char[right_char]>0)
            {
                required--;
            }
            count_char[right_char]--;
            
            while(required==0)
            {
                if(right-left+1 < min_length)
                {
                    min_left = left;
                    min_length = right-left+1;
                }
                char left_char = s[left];
                count_char[left_char]++;
                
                if(count_char[left_char]>0)
                {
                    required++;                    
                }
                left++;
            }
        }
        if(min_left==-1)
        {
            return "";
        }

        result = s.substr(min_left, min_length);
        return result;

    }
};